#include<stdio.h>
#include<unistd.h>

int main(){
	printf("_POSIX_VERSION constant:%ld\n",_POSIX_VERSION);
	
	#ifdef _POSIX_ASYNCHRONOUS_IO
		printf("POSIX Asynchronous I/O supported\n");
	#endif
	
	#ifdef _POSIX_BARRIERS
		printf("POSIX BARRIERS supported\n");
	#endif
	
	#ifdef _POSIX_CHOWN_RESTRICTED
		printf("POSIX CROWN RESTRICTED supported\n");
	#endif
	
	#ifdef _POSIX_CLOCK_SELECTION
		printf("POSIX CLOCK SELECTION supported\n");
	#endif
	
	#ifdef _POSIX_CPU_TIME
		printf("POSIX CPU TIME supported\n");
	#endif
	
	#ifdef _POSIX_FSYNC
		printf("POSIX FSYNC supported\n");
	#endif
	
	#ifdef _POSIX_IPV6
		printf("POSIX IPV6 supported\n");
	#endif
	
	#ifdef _POSIX_JOB_CONTROL
		printf("POSIX JOB CONTROL supported\n");
	#endif
	
	#ifdef _POSIX_MAPPED_FILES
		printf("POSIX MAPPED FILES supported\n");
	#endif
	
	#ifdef _POSIX_MEMLOCK
		printf("POSIX MEMLOCK supported\n");
	#endif
	
	#ifdef _POSIX_MEMLOCK_RANGE
		printf("POSIX MEMLOCK RANGE supported\n");
	#endif
	
	#ifdef _POSIX_MEMLOCK_PROTECTION
		printf("POSIX MEMLOCK PROTECTION supported\n");
	#endif
	
	#ifdef _POSIX_MESSAGE_PASSING
		printf("POSIX MESSAGE PASSING supported\n");
	#endif
	
	#ifdef _POSIX_MONOTONIC_CLOCK
		printf("POSIX MONOTONIC CLOCK supported\n");
	#endif
	
	#ifdef _POSIX_NO_TURNIC
		printf("POSIX NO TURNIC supported\n");
	#endif
	
	#ifdef _POSIX_PRIORITIZED_IO
		printf("POSIX PRIORITIZED IO supported\n");
	#endif
	
	#ifdef _POSIX_PRIORITY_SCHEDULING
		printf("POSIX PRIORITY SCHEDULING supported\n");
	#endif
	
	#ifdef _POSIX_RAW_SOCKETS
		printf("POSIX RAW SOCKETS supported\n");
	#endif
	
	#ifdef _POSIX_REALTIME_SIGNALS
		printf("POSIX REAL-TIME SIGNALS supported\n");
	#endif
	
	#ifdef _POSIX_SAVED_IDS
		printf("POSIX SAVED IDS supported\n");
	#endif
	
	#ifdef _POSIX_SEMAPHORES
		printf("POSIX SEMAPHORES supported\n");
	#endif
	
	#ifdef _POSIX_SHARED_MEMORY_OBJECTS
		printf("POSIX SHARED MEMORY OBJECTS supported\n");
	#endif
	
	#ifdef _POSIX_SHELL
		printf("POSIX SHELL supported\n");
	#endif
	
	#ifdef _POSIX_SPAWN
		printf("POSIX SPAWN supported\n");
	#endif
	
	#ifdef _POSIX_SPIN_LOCKS
		printf("POSIX SPINLOCKS supported\n");
	#endif
	
	#ifdef _POSIX_SPORADIC_SERVER
		printf("POSIX SPORADIC_SERVER supported\n");
	#endif
	
	#ifdef _POSIX_SYNCHRONIZED_IO
		printf("POSIX synchronzed I/O supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_ATTR_STACKADDR
		printf("POSIX THREAD ATTR STACKADDR supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_ATTR_STACKSIZE
		printf("POSIX THREAD ATTR STACKSIZE supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_CPUTIME
		printf("POSIX THREAD CPU TIME supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_PRIO_INHERIT
		printf("POSIX THREAD PRIO INHERIT supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_PRIO_PROJECT
		printf("POSIX THREAD PRIO PROJECT supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_PRIORITY_SCHEDULING
		printf("POSIX THREAD PRIORITY SCHEDULING supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_PROCESS_SHARED
		printf("POSIX THREAD PROCESS SHARED supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_ROBUST_PRIO_INHERIT
		printf("POSIX THREAD ROBUST PRIO INHERIT supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_ROBUST_PRIO_PROJECT
		printf("POSIX THREAD ROBUST PRIO PROJECT supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_SAFE_FUNCTION
		printf("POSIX THREAD SAFE FUNCTION  supported\n");
	#endif
	
	#ifdef _POSIX_THREAD_SPORADIC_SERVER
		printf("POSIX THREAD SPORADIC SERVER supported\n");
	#endif
	
	#ifdef _POSIX_THREADS
		printf("POSIX THREADS supported\n");
	#endif
	
	#ifdef _POSIX_TIMEOUTS
		printf("POSIX TIMEOUTS supported\n");
	#endif
	
	#ifdef _POSIX_TRACE
		printf("POSIX TRACE supported\n");
	#endif
	
	#ifdef _POSIX_TYPED_MEMORY_OBJECTS
		printf("POSIX TYPED MEMORY OBJECTS supported\n");
	#endif
	
	#ifdef _POSIX_VDISABLE
		printf("POSIX VDISABLE supported\n");
	#endif
	
	#ifdef _POSIX_V6_ILP32_OFF32
		printf("POSIX V6 ILP32 OFF32 supported\n");
	#endif
	
	#ifdef _POSIX_V6_ILP32_OFFBIG
		printf("POSIX V6 ILP32 OFFBIG supported\n");
	#endif
	
	#ifdef _POSIX_V6_LP64_OFF64
		printf("POSIX V6 LP64 OFF64 supported\n");
	#endif
	
	#ifdef _POSIX_V7_LPBIG_OFFBIG
		printf("POSIX V7 ILPBIG OFFBIG supported\n");
	#endif
	
	#ifdef _POSIX_V7_ILP32_OFF32
		printf("POSIX V7 ILP32 OFF32 supported\n");
	#endif
	
	#ifdef _POSIX_V7_ILP32_OFFBIG
		printf("POSIX V7 ILP32 OFFBIG supported\n");
	#endif
	
	#ifdef _POSIX_V7_LP64_OFF64
		printf("POSIX V7 LP64 OFF64 supported\n");
	#endif
	
	#ifdef _POSIX_V7_LPBIG_OFFBIG
		printf("POSIX V7 ILPBIG OFFBIG supported\n");
	#endif
	
	return 0;
}
