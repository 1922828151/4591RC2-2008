/*
 * func-name: ?SetSelRange@CMultiLineEB@@IAEXHHHH@Z
 * func-address: 0x100ae290
 * callers: 0x100ae570
 * callees: 0x100ae230
 */

void __thiscall CMultiLineEB::SetSelRange(CMultiLineEB *this, int a2, int a3, int a4, int a5)
{
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  unsigned int i; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // [esp+20h] [ebp+10h]

  CMultiLineEB::ClearAllSelect(this);
  v6 = a2;
  v7 = a3;
  *((_BYTE *)this + 856) = 1;
  if ( a2 > a3 || a2 == a3 && a4 > a5 )
  {
    v6 = a3;
    v7 = a2;
    v8 = a4;
    a4 = a5;
    a5 = v8;
  }
  v13 = a5 - 1;
  for ( i = v6; (int)i <= v7; v11[2] = v12 )
  {
    v10 = *((_DWORD *)this + 224);
    if ( !v10 || i >= (*((_DWORD *)this + 225) - v10) >> 2 )
      invalid_parameter_noinfo();
    v11 = *(_DWORD **)(*((_DWORD *)this + 224) + 4 * i);
    v11[1] = i != v6 ? 0 : a4;
    if ( i == v7 )
      v12 = v13;
    else
      v12 = *(_DWORD *)(*v11 + 8) - 1;
    ++i;
  }
}
