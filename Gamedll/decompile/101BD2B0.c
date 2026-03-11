/*
 * func-name: ??1EstabControllerManager@GameClient@@UAE@XZ_0
 * func-address: 0x101bd2b0
 * callers: 0x10011aa4
 * callees: 0x102c9d50
 */

void __thiscall GameClient::EstabControllerManager::~EstabControllerManager(void **this)
{
  char *v1; // esi
  _DWORD **v2; // ecx
  _DWORD *v3; // eax
  bool v4; // zf
  _DWORD *v5; // edi

  *this = &GameClient::EstabControllerManager::`vftable';
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
