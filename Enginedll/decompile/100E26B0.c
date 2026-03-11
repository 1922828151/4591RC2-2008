/*
 * func-name: ?LogPrintf@@YAXW4LogLevel@@PBDZZ
 * func-address: 0x100e26b0
 * callers: 0x101198c0, 0x10136530
 * callees: 0x100971c0, 0x100e2550, 0x101a2780
 */

void LogPrintf(int a1, char *Format, ...)
{
  char Buffer[8000]; // [esp+0h] [ebp-1F40h] BYREF
  va_list ArgList; // [esp+1F4Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  vsprintf(Buffer, Format, ArgList);
  if ( a1 <= *((_DWORD *)Engine::Instance() + 1) )
    LogPrintf(Buffer);
}
