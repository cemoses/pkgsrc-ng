$NetBSD: patch-Modules_readline.c,v 1.2 2014/03/27 06:26:24 obache Exp $

* fixes for readline-6.3
  http://bugs.python.org/issue20374

--- Modules/readline.c.orig	2013-11-10 07:36:41.000000000 +0000
+++ Modules/readline.c
@@ -750,7 +750,11 @@ on_hook(PyObject *func)
 }
 
 static int
+#if defined(_RL_FUNCTION_TYPEDEF)
 on_startup_hook(void)
+#else
+on_startup_hook()
+#endif
 {
     return on_hook(startup_hook);
 }
@@ -852,7 +856,7 @@ on_completion(const char *text, int stat
  * before calling the normal completer */
 
 static char **
-flex_complete(char *text, int start, int end)
+flex_complete(const char *text, int start, int end)
 {
 #ifdef HAVE_RL_COMPLETION_APPEND_CHARACTER
     rl_completion_append_character ='\0';
@@ -911,12 +915,12 @@ setup_readline(void)
     rl_bind_key_in_map ('\t', rl_complete, emacs_meta_keymap);
     rl_bind_key_in_map ('\033', rl_complete, emacs_meta_keymap);
     /* Set our hook functions */
-    rl_startup_hook = (Function *)on_startup_hook;
+    rl_startup_hook = on_startup_hook;
 #ifdef HAVE_RL_PRE_INPUT_HOOK
-    rl_pre_input_hook = (Function *)on_pre_input_hook;
+    rl_pre_input_hook = on_pre_input_hook;
 #endif
     /* Set our completion function */
-    rl_attempted_completion_function = (CPPFunction *)flex_complete;
+    rl_attempted_completion_function = flex_complete;
     /* Set Python word break characters */
     completer_word_break_characters =
         rl_completer_word_break_characters =
