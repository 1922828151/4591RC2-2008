/*
 * func-name: ?SetNodeInfluence@AdapterActor@GameClient@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVMatrix@@@Z_0
 * func-address: 0x100f32e0
 * callers: 0x10006005
 * callees: 0x1000df7b
 */

void __thiscall GameClient::AdapterActor::SetNodeInfluence(int this, int a2, struct Matrix *a3)
{
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // [esp+14h] [ebp-8h] BYREF
  int v8; // [esp+18h] [ebp-4h]

  sub_1000DF7B((int)&v7, a2);
  v4 = v7;
  v5 = *(_DWORD *)(this + 1144);
  if ( !v7 || v7 != this + 1140 )
    _invalid_parameter_noinfo();
  v6 = v8;
  if ( v8 != v5 )
  {
    if ( !v4 )
      _invalid_parameter_noinfo();
    if ( v6 == *(_DWORD *)(v4 + 4) )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(v6 + 36) )
    {
      if ( v6 == *(_DWORD *)(v4 + 4) )
        _invalid_parameter_noinfo();
      StaticModel::SetNodeInfluence(*(StaticModel **)(this + 716), *(void **)(v6 + 36), a3, 1.0);
    }
  }
}
