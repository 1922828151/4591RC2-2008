/*
 * func-name: ?UnloadResource@OccupyIcon@GameClient@@UAEXXZ_0
 * func-address: 0x101697e0
 * callers: 0x10017396
 * callees: 0x10004edf, 0x10016b58, 0x102c9d50
 */

void __thiscall GameClient::OccupyIcon::UnloadResource(GameClient::OccupyIcon *this)
{
  char *v1; // ebx
  _DWORD *i; // esi
  void *v3; // edi
  int v4; // [esp+0h] [ebp-14h]
  int v5; // [esp+4h] [ebp-10h]

  v1 = (char *)this + 476;
  for ( i = (_DWORD *)**((_DWORD **)this + 120); i != *((_DWORD **)v1 + 1); i = (_DWORD *)*i )
  {
    v3 = (void *)i[3];
    if ( v3 )
    {
      sub_10016B58(v4, v5);
      operator delete(v3);
    }
    if ( i == *((_DWORD **)v1 + 1) )
      _invalid_parameter_noinfo();
  }
  sub_10004EDF();
  GameClient::NonControlledEstab::UnloadResource(this);
}
