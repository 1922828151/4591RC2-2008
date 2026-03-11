/*
 * func-name: ??1EstabManager@GameClient@@UAE@XZ_0
 * func-address: 0x101ab390
 * callers: 0x10018d27
 * callees: 0x10004e3a, 0x102c9d50
 */

void __thiscall GameClient::EstabManager::~EstabManager(void **this)
{
  char *v1; // esi
  _DWORD **v2; // ecx
  _DWORD *v3; // eax
  bool v4; // zf
  _DWORD *v5; // edi

  *this = &GameClient::EstabManager::`vftable';
  if ( this[16] )
    operator delete(this[16]);
  this[16] = 0;
  this[17] = 0;
  this[18] = 0;
  sub_10004E3A();
  if ( this[6] )
    operator delete(this[6]);
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  v1 = (char *)(this + 2);
  v2 = (_DWORD **)*((_DWORD *)v1 + 1);
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(*((_DWORD *)v1 + 1) + 4) = *((_DWORD *)v1 + 1);
  v4 = v3 == *((_DWORD **)v1 + 1);
  *((_DWORD *)v1 + 2) = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != *((_DWORD **)v1 + 1) );
  }
  operator delete(*((void **)v1 + 1));
  *((_DWORD *)v1 + 1) = 0;
}
