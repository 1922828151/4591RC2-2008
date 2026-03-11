/*
 * func-name: ?Out@EngineLog@@QAAXPBDZZ
 * func-address: 0x100e2470
 * callers: 0x100e2550
 * callees: 0x100161f0, 0x101a251c, 0x101a2780
 */

void EngineLog::Out(EngineLog *this, char *Format, ...)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __time64_t Time; // [esp+4h] [ebp-1FACh] BYREF
  char Buffer[100]; // [esp+Ch] [ebp-1FA4h] BYREF
  char v9[8000]; // [esp+70h] [ebp-1F40h] BYREF
  va_list ArgList; // [esp+1FBCh] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  memset(Buffer, 0, sizeof(Buffer));
  Time = time64(0);
  ctime64_s(Buffer, 0x63u, &Time);
  Buffer[24] = 0;
  vsprintf(v9, Format, ArgList);
  v2 = sub_100161F0((int)this, (int)Buffer);
  v3 = sub_100161F0(v2, (int)"   ");
  v4 = std::operator<<<char>(v3, (char *)this + 136);
  v5 = sub_100161F0(v4, (int)"   ");
  v6 = sub_100161F0(v5, (int)v9);
  std::ostream::operator<<(v6, std::endl);
  std::ostream::flush(this);
}
