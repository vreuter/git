#ifndef REBASE_INTERACTIVE_H
#define REBASE_INTERACTIVE_H

struct strbuf;
struct repository;

void append_todo_help(unsigned edit_todo, unsigned keep_empty,
		      struct strbuf *buf);
int edit_todo_list(struct repository *r, unsigned flags);

#endif
