#include "jrst_private.h"

void JNICALL jrst_EventBreakpoint
    (jvmtiEnv *jvmti_env,
     JNIEnv* jni_env,
     jthread thread,
     jmethodID method,
     jlocation location)
{
}

void JNICALL jrst_EventClassFileLoadHook (jvmtiEnv *jvmti_env,
                                          JNIEnv* jni_env,
                                          jclass class_being_redefined,
                                          jobject loader,
                                          const char* name,
                                          jobject protection_domain,
                                          jint class_data_len,
                                          const unsigned char* class_data,
                                          jint* new_class_data_len,
                                          unsigned char** new_class_data)
{
  /* jrst_enter_critical_section(jvmtiLocate, gagent->monitor); */

  /* if (initialized == false) { */

  /*   if (jrst_trace_class((char *) name) == false) { */
  /*     class_number++; */
  /*     jrst_exit_critical_section(jvmtiLocate, gagent->monitor); */
  /*     return; */
  /*   } */

  /*   jvmtiClassDefinition definition; */
  /*   definition.class_byte_count = class_data_len; */
  /*   definition.class_bytes = class_data; */

  /*   /\* hash_insert(&h_class, (hash_key_t) name, (hash_data_t) & definition); *\/ */

  /*   jrst_exit_critical_section(jvmtiLocate, gagent->monitor); */
  /*   return; */
  /* } */

  /* jvmtiError err; */
  /* int system_class = 0; */
  /* unsigned char *new_file_image = NULL; */
  /* long new_file_len = 0; */


  /* if (class_being_redefined == NULL) { */
  /*   if (jrst_trace_class((char *) name) == false */
  /*       || strcmp(name, "org/lsc/JRastro/Instru") == 0) { */
  /*     class_number++; */
  /*     jrst_exit_critical_section(jvmtiLocate, gagent->monitor); */
  /*     return; */
  /*   } */
  /* } else { */
  /*   system_class = 1; */
  /* } */

  /* //Registro do identificador e nome da classe */
  /* trace_event_class_load(class_number, (char *) name); */

  /* java_crw_demo(class_number, */
  /*               name, */
  /*               class_data, */
  /*               class_data_len, */
  /*               system_class, */
  /*               &new_file_image, &new_file_len, &jrst_trace_methods); */

  /* if (new_file_len > 0) { */
  /*   unsigned char *jvmti_space; */
  /*   err = */
  /*       (*jvmtiLocate)->Allocate(jvmtiLocate, (jlong) new_file_len, */
  /*                                &jvmti_space); */
  /*   jrst_check_error(jvmtiLocate, err, "Cannot Allocate memory"); */

  /*   (void) memcpy((void *) jvmti_space, (void *) new_file_image, */
  /*                 (int) new_file_len); */
  /*   *new_class_data_len = (jint) new_file_len; */
  /*   *new_class_data = jvmti_space; */

  /* } */
  /* class_number++; */

  /* jrst_exit_critical_section(jvmtiLocate, gagent->monitor); */
}

void JNICALL jrst_EventClassLoad (jvmtiEnv *jvmti_env,
                                  JNIEnv* jni_env,
                                  jthread thread,
                                  jclass klass)
{
}

void JNICALL jrst_EventClassPrepare (jvmtiEnv *jvmti_env,
                                     JNIEnv* jni_env,
                                     jthread thread,
                                     jclass klass)
{
}

void JNICALL jrst_EventCompiledMethodLoad (jvmtiEnv *jvmti_env,
                                           jmethodID method,
                                           jint code_size,
                                           const void* code_addr,
                                           jint map_length,
                                           const jvmtiAddrLocationMap* map,
                                           const void* compile_info)
{
}

void JNICALL jrst_EventCompiledMethodUnload (jvmtiEnv *jvmti_env,
                                             jmethodID method,
                                             const void* code_addr)
{
}

void JNICALL jrst_EventDataDumpRequest (jvmtiEnv *jvmti_env)
{
}

void JNICALL jrst_EventDynamicCodeGenerated (jvmtiEnv *jvmti_env,
                                             const char* name,
                                             const void* address,
                                             jint length)
{
}

void JNICALL jrst_EventException (jvmtiEnv *jvmti_env,
                                  JNIEnv* jni_env,
                                  jthread thread,
                                  jmethodID method,
                                  jlocation location,
                                  jobject exception,
                                  jmethodID catch_method,
                                  jlocation catch_location)
{
}

void JNICALL jrst_EventExceptionCatch (jvmtiEnv *jvmti_env,
                                       JNIEnv* jni_env,
                                       jthread thread,
                                       jmethodID method,
                                       jlocation location,
                                       jobject exception)
{
}

void JNICALL jrst_EventFieldAccess (jvmtiEnv *jvmti_env,
                                    JNIEnv* jni_env,
                                    jthread thread,
                                    jmethodID method,
                                    jlocation location,
                                    jclass field_klass,
                                    jobject object,
                                    jfieldID field)
{
}

void JNICALL jrst_EventFieldModification (jvmtiEnv *jvmti_env,
                                          JNIEnv* jni_env,
                                          jthread thread,
                                          jmethodID method,
                                          jlocation location,
                                          jclass field_klass,
                                          jobject object,
                                          jfieldID field,
                                          char signature_type,
                                          jvalue new_value)
{
}

void JNICALL jrst_EventFramePop (jvmtiEnv *jvmti_env,
                                 JNIEnv* jni_env,
                                 jthread thread,
                                 jmethodID method,
                                 jboolean was_popped_by_exception)
{
}

void JNICALL jrst_EventGarbageCollectionFinish (jvmtiEnv *jvmti_env)
{
}

void JNICALL jrst_EventGarbageCollectionStart (jvmtiEnv *jvmti_env)
{
}

void JNICALL jrst_EventMethodEntry (jvmtiEnv *jvmti_env,
                                    JNIEnv* jni_env,
                                    jthread thread,
                                    jmethodID method)
{
}

void JNICALL jrst_EventMethodExit (jvmtiEnv *jvmti_env,
                                   JNIEnv* jni_env,
                                   jthread thread,
                                   jmethodID method,
                                   jboolean was_popped_by_exception,
                                   jvalue return_value)
{
}

void JNICALL jrst_EventMonitorContendedEnter (jvmtiEnv *jvmti_env,
                                              JNIEnv* jni_env,
                                              jthread thread,
                                              jobject object)
{
}

void JNICALL jrst_EventMonitorContendedEntered (jvmtiEnv *jvmti_env,
                                                JNIEnv* jni_env,
                                                jthread thread,
                                                jobject object)
{
}

void JNICALL jrst_EventMonitorWait (jvmtiEnv *jvmti_env,
                                    JNIEnv* jni_env,
                                    jthread thread,
                                    jobject object,
                                    jlong timeout)
{
}

void JNICALL jrst_EventMonitorWaited (jvmtiEnv *jvmti_env,
                                      JNIEnv* jni_env,
                                      jthread thread,
                                      jobject object,
                                      jboolean timed_out)
{
}

void JNICALL jrst_EventNativeMethodBind (jvmtiEnv *jvmti_env,
                                         JNIEnv* jni_env,
                                         jthread thread,
                                         jmethodID method,
                                         void* address,
                                         void** new_address_ptr)
{
}

void JNICALL jrst_EventObjectFree (jvmtiEnv *jvmti_env,
                                   jlong tag)
{
}

void JNICALL jrst_EventResourceExhausted (jvmtiEnv *jvmti_env,
                                          JNIEnv* jni_env,
                                          jint flags,
                                          const void* reserved,
                                          const char* description)
{
}

void JNICALL jrst_EventSingleStep (jvmtiEnv *jvmti_env,
                                   JNIEnv* jni_env,
                                   jthread thread,
                                   jmethodID method,
                                   jlocation location)
{
}

void JNICALL jrst_EventThreadStart (jvmtiEnv *jvmti_env,
                                    JNIEnv* jni_env,
                                    jthread thread)
{
  char name[JRST_MAX_THREAD_NAME];
  jrst_get_thread_name(GET_JVMTI(), thread, name, JRST_MAX_THREAD_NAME);
  trace_initialize(GET_JVMTI(), thread, name);
}

void JNICALL jrst_EventThreadEnd (jvmtiEnv *jvmti_env,
                                  JNIEnv* jni_env,
                                  jthread thread)
{
  trace_finalize(GET_JVMTI(), thread);
}

void JNICALL jrst_EventVMDeath (jvmtiEnv *jvmti_env,
                                JNIEnv* jni_env)
{
  trace_flush_buffers();
}

void JNICALL jrst_EventVMInit (jvmtiEnv *jvmti_env,
                               JNIEnv* jni_env,
                               jthread thread)
{
  jrst_enter_critical_section(GET_JVMTI(), jrst->monitor);

  //define a unique JVM id
  struct timeval rt;
  gettimeofday(&rt, NULL);
  jrst_jvmid = rt.tv_sec * 1000000 + rt.tv_usec;


  /* /\*Funcao que abilita as opcoes dos eventos *\/ */
  /* jrst_read_events_enable(jvmtiLocate); */

  /* jvmtiError error; */
  /* jint class_count_ptr; */
  /* jclass *classes_ptr; */
  /* jvmtiClassDefinition definitions[300]; */
  /* hash_data_t *class = NULL; */
  /* int count = 0; */
  /* int i; */

  /* error = */
  /*     (*jvmtiLocate)->GetLoadedClasses(jvmtiLocate, &class_count_ptr, */
  /*                                      &classes_ptr); */
  /* jrst_check_error(jvmtiLocate, error, "Cannot Get Loaded Classes"); */

  /* for (i = 0; i < class_count_ptr; i++) { */

  /*   char *signature_ptr; */
  /*   char *generic_ptr; */
  /*   int size = 0; */
  /*   char *tmp; */

  /*   error = */
  /*       (*jvmtiLocate)->GetClassSignature(jvmtiLocate, classes_ptr[i], */
  /*                                         &signature_ptr, &generic_ptr); */
  /*   jrst_check_error(jvmtiLocate, error, "Cannot Get Class Signature"); */

  /*   /\*Tirar da signature o caracter 'L' *\/ */
  /*   tmp = (char *) signature_ptr + 1; */
  /*   /\* -1 Pois comeca em 0 o vetor *\/ */
  /*   size = strlen(tmp) - 1; */
  /*   /\*Tira da signature o caracter ';' *\/ */
  /*   tmp[size] = '\0'; */

  /*   class = hash_locate(&h_class, (hash_key_t) tmp); */

  /*   if (class != NULL) { */
  /*     definitions[count] = **(jvmtiClassDefinition **) class; */
  /*     definitions[count].klass = classes_ptr[i]; */
  /*     count++; */

  /*   } */

  /*   error = */
  /*       (*jvmtiLocate)->Deallocate(jvmtiLocate, */
  /*                                  (unsigned char *) signature_ptr); */
  /*   jrst_check_error(jvmtiLocate, error, "Cannot deallocate memory"); */
  /*   error = */
  /*       (*jvmtiLocate)->Deallocate(jvmtiLocate, */
  /*                                  (unsigned char *) generic_ptr); */
  /*   jrst_check_error(jvmtiLocate, error, "Cannot deallocate memory"); */
  /* } */

  /* initialized = true; */

  /* error = (*jvmtiLocate)->RedefineClasses(jvmtiLocate, count, definitions); */
  /* jrst_check_error(jvmtiLocate, error, "Redefine Classes"); */

  /* error = */
  /*     (*jvmtiLocate)->Deallocate(jvmtiLocate, */
  /*                                (unsigned char *) classes_ptr); */
  /* jrst_check_error(jvmtiLocate, error, "Cannot deallocate memory"); */


  /* if (traces) { */
  /*   jrst_threads(jvmtiLocate); */
  /* } */

  char name[JRST_MAX_THREAD_NAME];
  jrst_get_thread_name(GET_JVMTI(), thread, name, JRST_MAX_THREAD_NAME);
  trace_initialize(GET_JVMTI(), thread, name);

  jrst_exit_critical_section(GET_JVMTI(), jrst->monitor);
}

void JNICALL jrst_EventVMObjectAlloc (jvmtiEnv *jvmti_env,
                                      JNIEnv* jni_env,
                                      jthread thread,
                                      jobject object,
                                      jclass object_klass,
                                      jlong size)
{
}

void JNICALL jrst_EventVMStart (jvmtiEnv *jvmti_env,
                                JNIEnv* jni_env)
{
}
