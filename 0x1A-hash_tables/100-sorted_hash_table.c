#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: the sorted hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    current = ht->shead;

    while (current != NULL && strcmp(current->key, key) < 0)
        current = current->snext;

    if (current != NULL && strcmp(current->key, key) == 0)
    {
        free(current->value);
        current->value = strdup(value);
        if (current->value == NULL)
            return (0);
        return (1);
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = NULL;
    if (current != NULL)
    {
        new_node->sprev = current->sprev;
        new_node->snext = current;
        if (current->sprev != NULL)
            current->sprev->snext = new_node;
        else
            ht->shead = new_node;
        current->sprev = new_node;
    }
    else
    {
        new_node->sprev = ht->stail;
        new_node->snext = NULL;
        if (ht->stail != NULL)
            ht->stail->snext = new_node;
        else
            ht->shead = new_node;
        ht->stail = new_node;
    }

    if (shash_table_add_node(ht, new_node) == 0)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the sorted hash table
 * @key: the key
 *
 * Return: the value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    current = ht->shead;

    while (current != NULL && strcmp(current->key, key) < 0)
        current = current->snext;

    if (current != NULL && strcmp(current->key, key) == 0)
        return (current->value);

    return (NULL);
}

/**
 * shash_table_print - prints the sorted hash table
 * @ht: the sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->shead;
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - prints the sorted hash table in reverse order
 * @ht: the sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->stail;
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current, *temp;

    if (ht == NULL)
        return;

    current = ht->shead;
    while (current != NULL)
    {
        temp = current->snext;
        free(current->key);
        free(current->value);
        free(current);
        current = temp;
    }

    free(ht->array);
    free(ht);
}

