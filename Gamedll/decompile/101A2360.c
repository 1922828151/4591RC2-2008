/*
 * func-name: ?UpdateInput@Establishment@GameClient@@UAEXH@Z_0
 * func-address: 0x101a2360
 * callers: 0x10003e09
 * callees: 0x10010839
 */

void __thiscall GameClient::Establishment::UpdateInput(GameClient::Establishment *this, unsigned int a2)
{
  int v2; // edx
  char *v3; // ecx
  _DWORD *v4; // eax

  if ( *(_DWORD *)(*((_DWORD *)this + 75) + 716) )
  {
    if ( (a2 & 0x80000000) == 0 )
    {
      v2 = *((_DWORD *)this + 49);
      v3 = (char *)this + 192;
      if ( v2 )
      {
        if ( a2 < (*((_DWORD *)v3 + 2) - v2) >> 2 )
        {
          v4 = (_DWORD *)sub_10010839(a2);
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 24))(*v4);
        }
      }
    }
  }
}
