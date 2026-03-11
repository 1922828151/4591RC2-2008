/*
 * func-name: sub_100016B0
 * func-address: 0x100016b0
 * callers: none
 * callees: none
 */

BOOL __thiscall sub_100016B0(HANDLE *lpParameter)
{
  HANDLE *v2; // edi
  HANDLE v3; // eax
  HANDLE v4; // ebx
  HANDLE CurrentThread; // [esp-18h] [ebp-28h]
  HANDLE CurrentProcess; // [esp-14h] [ebp-24h]
  HANDLE *v8; // [esp-10h] [ebp-20h]
  DWORD ThreadId; // [esp+Ch] [ebp-4h] BYREF

  v2 = lpParameter + 15;
  v8 = lpParameter + 15;
  CurrentProcess = GetCurrentProcess();
  CurrentThread = GetCurrentThread();
  v3 = GetCurrentProcess();
  DuplicateHandle(v3, CurrentThread, CurrentProcess, v8, 0, 0, 2u);
  v4 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)StartAddress, lpParameter, 0, &ThreadId);
  WaitForSingleObject(lpParameter[14], 0xFFFFFFFF);
  CloseHandle(v4);
  return CloseHandle(*v2);
}
