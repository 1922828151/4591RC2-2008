/*
 * func-name: ??1Thread_Mutex@Utility@Outpop@@QAE@XZ
 * func-address: 0x10015ff0
 * callers: 0x100024d0, 0x10002780, 0x10002810, 0x100036a0, 0x10003c80, 0x10003e80, 0x10004030, 0x10005570, 0x100059a0, 0x10005a20, 0x10009580, 0x100096d0, 0x1000a7c0, 0x1000c530, 0x1000c5a0, 0x1000c9e0, 0x1000cc10, 0x1000cdb0, 0x1000ce30, 0x10016600, 0x100166d0, 0x100168a0
 * callees: none
 */

void __thiscall Outpop::Utility::Thread_Mutex::~Thread_Mutex(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
