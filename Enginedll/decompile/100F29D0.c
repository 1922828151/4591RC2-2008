/*
 * func-name: ?UnloadAllAnimations@Model@@QAEXXZ
 * func-address: 0x100f29d0
 * callers: 0x1010c190
 * callees: 0x100204a0
 */

void __thiscall Model::UnloadAllAnimations(Model *this)
{
  unsigned int v2; // ebx
  _DWORD *v3; // edi
  unsigned int v4; // ebp
  int v5; // eax
  unsigned int v6; // edi
  _DWORD *v7; // ebx
  int v8; // ebx
  int i; // edi
  int v10; // [esp+10h] [ebp-198h] BYREF
  _DWORD v11[100]; // [esp+18h] [ebp-190h] BYREF

  v2 = *((_DWORD *)this + 97);
  v3 = (_DWORD *)((char *)this + 380);
  if ( *((_DWORD *)this + 96) > v2 )
    invalid_parameter_noinfo();
  v4 = v3[1];
  if ( v4 > v3[2] )
    invalid_parameter_noinfo();
  sub_100204A0(v3, &v10, (int)v3, v4, (int)v3, v2);
  v5 = *((_DWORD *)this + 94);
  if ( v5 )
  {
    v6 = 0;
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 40))(*((_DWORD *)this + 94)) )
    {
      v7 = v11;
      do
        (*(void (__stdcall **)(_DWORD, unsigned int, _DWORD *))(**((_DWORD **)this + 94) + 44))(
          *((_DWORD *)this + 94),
          v6++,
          v7++);
      while ( v6 < (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 94) + 40))(*((_DWORD *)this + 94)) );
    }
    v8 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 94) + 40))(*((_DWORD *)this + 94));
    for ( i = 0; i < v8; ++i )
      (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 94) + 36))(*((_DWORD *)this + 94), v11[i]);
    *((_DWORD *)this + 99) = -1;
  }
}
