/* config/IlmBaseConfig.h.  Generated by configure.  */
//
// Define and set to 1 if the target system has POSIX thread support
// and you want IlmBase to use it for multithreaded file I/O.
//

#if defined _WIN32 && !defined(WIN32)
#	define WIN32
#endif // _WIN32

#if defined(WIN32) || defined (__MINGW32__)
#	undef HAVE_PTHREAD
#endif

#if defined(__GNUC__) && !defined(WIN32)
#	define HAVE_PTHREAD 1
#endif



//
// Define and set to 1 if the target system supports POSIX semaphores
// and you want OpenEXR to use them; otherwise, OpenEXR will use its
// own semaphore implementation.
//

#define HAVE_POSIX_SEMAPHORES 1

#if defined(WIN32) || defined (__MINGW32__)
#	undef HAVE_POSIX_SEMAPHORES
#endif

#if defined(__GNUC__) && !defined(WIN32)
#	define HAVE_POSIX_SEMAPHORES 1
#endif
