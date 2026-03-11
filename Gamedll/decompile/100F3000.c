/*
 * func-name: ?RemoveAsyncHandle@AdapterActor@GameClient@@QAEXH@Z_0
 * func-address: 0x100f3000
 * callers: 0x1001940c
 * callees: 0x102c9d50
 */

void __thiscall GameClient::AdapterActor::RemoveAsyncHandle(GameClient::AdapterActor *this, int a2)
{
  _DWORD *v2; // esi
  char *v3; // edi

  v2 = (_DWORD *)**((_DWORD **)this + 310);
  v3 = (char *)this + 1236;
  while ( v2 != *((_DWORD **)v3 + 1) )
  {
    if ( v2[2] == a2 )
    {
      if ( v2 != *((_DWORD **)v3 + 1) || (_invalid_parameter_noinfo(), v2 != *((_DWORD **)v3 + 1)) )
      {
        *(_DWORD *)v2[1] = *v2;
        *(_DWORD *)(*v2 + 4) = v2[1];
        operator delete(v2);
        --*((_DWORD *)v3 + 2);
      }
      return;
    }
    if ( v2 == *((_DWORD **)v3 + 1) )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
}
