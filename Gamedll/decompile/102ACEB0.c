/*
 * func-name: sub_102ACEB0
 * func-address: 0x102aceb0
 * callers: 0x100018ac
 * callees: 0x10010d39, 0x100161d5
 */

void __thiscall sub_102ACEB0(_DWORD *this, char a2)
{
  void *v3; // ebp
  _DWORD *v4; // eax
  int v5; // esi
  unsigned int *v6; // ebx
  int v7; // [esp+10h] [ebp-8h] BYREF
  void *v8; // [esp+14h] [ebp-4h]

  sub_10010D39((int)&v7, (int)&a2);
  v3 = (void *)this[10];
  v4 = this + 9;
  v5 = v7;
  if ( !v7 || (_DWORD *)v7 != v4 )
    _invalid_parameter_noinfo();
  v6 = (unsigned int *)v8;
  if ( v8 != v3 )
  {
    if ( !v5 )
      _invalid_parameter_noinfo();
    if ( v6 == *(unsigned int **)(v5 + 4) )
      _invalid_parameter_noinfo();
    Outpop::Message::Message_Facade::cache_close_connector(v6[3]);
    sub_100161D5((int)&v7, v5, v6);
  }
}
