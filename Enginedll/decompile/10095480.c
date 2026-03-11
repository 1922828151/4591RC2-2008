/*
 * func-name: sub_10095480
 * func-address: 0x10095480
 * callers: 0x10095d70
 * callees: none
 */

int sub_10095480()
{
  int result; // eax
  HANDLE CurrentProcess; // eax
  int v2; // [esp+8h] [ebp-4h] BYREF

  result = 0;
  v2 = 0;
  if ( dword_1028582C )
  {
    CurrentProcess = GetCurrentProcess();
    dword_1028582C(CurrentProcess, &v2);
    return v2;
  }
  return result;
}
