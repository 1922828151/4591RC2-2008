/*
 * func-name: ?first_set_deskey@Security@IONetwork@Outpop@@QAEXPAD0H@Z
 * func-address: 0x1000d260
 * callers: 0x1003e800, 0x1003eff0, 0x100407c0, 0x10040f80
 * callees: 0x1004e85c, 0x1004e938, 0x1004f11e, 0x1004f124
 */

void *__thiscall Outpop::IONetwork::Security::first_set_deskey(
        Outpop::IONetwork::Security *this,
        char *Src,
        char *a3,
        size_t Size)
{
  size_t v5; // edi
  void *v6; // eax
  void *v7; // eax

  if ( *((_DWORD *)this + 3) )
  {
    operator delete[](*((_DWORD *)this + 3));
    *((_DWORD *)this + 3) = 0;
  }
  v5 = Size + 1;
  v6 = (void *)operator new(Size + 1);
  *((_DWORD *)this + 3) = v6;
  memset(v6, 0, Size + 1);
  memcpy(*((void **)this + 3), Src, Size);
  if ( *((_DWORD *)this + 4) )
  {
    operator delete[](*((_DWORD *)this + 4));
    *((_DWORD *)this + 4) = 0;
  }
  v7 = (void *)operator new(v5);
  *((_DWORD *)this + 4) = v7;
  memset(v7, 0, v5);
  return memcpy(*((void **)this + 4), Src, Size);
}
