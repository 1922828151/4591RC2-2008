/*
 * func-name: sub_10102290
 * func-address: 0x10102290
 * callers: none
 * callees: 0x10007009, 0x102c9d50
 */

int *__thiscall sub_10102290(int this, int *a2, int a3, _DWORD **a4, int a5, _DWORD **a6)
{
  _DWORD **v7; // ebp
  _DWORD **v8; // esi
  bool v9; // zf
  int v10; // ebp
  int *result; // eax
  _DWORD **v12; // ebp
  int v13; // [esp+0h] [ebp-28h]
  int v14; // [esp+4h] [ebp-24h]
  _DWORD **v15; // [esp+34h] [ebp+Ch]

  v7 = **(_DWORD ****)(this + 4);
  if ( !a3 || a3 != this )
    _invalid_parameter_noinfo();
  v8 = a4;
  v9 = a4 == v7;
  v10 = a5;
  if ( !v9 )
    goto LABEL_13;
  v15 = *(_DWORD ***)(this + 4);
  if ( !a5 || a5 != this )
    _invalid_parameter_noinfo();
  if ( a6 == v15 )
  {
    sub_10007009(v13, v14);
    result = a2;
    a2[1] = *(_DWORD *)(this + 4);
    *a2 = this;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( !a3 || a3 != v10 )
        _invalid_parameter_noinfo();
      if ( v8 == a6 )
        break;
      if ( !a3 )
        _invalid_parameter_noinfo();
      if ( v8 == *(_DWORD ***)(a3 + 4) )
        _invalid_parameter_noinfo();
      v12 = (_DWORD **)*v8;
      if ( v8 != *(_DWORD ***)(this + 4) )
      {
        *v8[1] = v12;
        (*v8)[1] = v8[1];
        AnimationSet::~AnimationSet((AnimationSet *)(v8 + 9));
        std::string::~string(v8 + 2);
        operator delete(v8);
        --*(_DWORD *)(this + 8);
      }
      v8 = v12;
      v10 = a5;
    }
    result = a2;
    *a2 = v10;
    a2[1] = (int)a6;
  }
  return result;
}
