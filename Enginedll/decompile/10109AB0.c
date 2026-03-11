/*
 * func-name: ?SetTransform@ActorGroup@@QAEXPAVVector@@PAVMatrix@@@Z
 * func-address: 0x10109ab0
 * callers: none
 * callees: 0x10076ef0, 0x101786e0, 0x10179590, 0x101a251c
 */

void __thiscall ActorGroup::SetTransform(ActorGroup *this, struct Vector *a2, struct Matrix *a3)
{
  unsigned int i; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  float v10[16]; // [esp+14h] [ebp-40h] BYREF

  if ( a3 )
  {
    *((_DWORD *)this + 11) = *(_DWORD *)a3;
    *((_DWORD *)this + 12) = *((_DWORD *)a3 + 1);
    *((_DWORD *)this + 13) = *((_DWORD *)a3 + 2);
    *((_DWORD *)this + 15) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 16) = *((_DWORD *)a3 + 5);
    *((_DWORD *)this + 17) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 19) = *((_DWORD *)a3 + 8);
    *((_DWORD *)this + 20) = *((_DWORD *)a3 + 9);
    *((_DWORD *)this + 21) = *((_DWORD *)a3 + 10);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 23) = *(_DWORD *)a2;
    *((_DWORD *)this + 24) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 25) = *((_DWORD *)a2 + 2);
  }
  for ( i = 0; i < std::vector<Model *>::size(this); ++i )
  {
    v5 = *((_DWORD *)this + 1);
    if ( !v5 || i >= (*((_DWORD *)this + 2) - v5) >> 2 )
      invalid_parameter_noinfo();
    v6 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(v6 + 4 * i) )
    {
      if ( !v6 || i >= (*((_DWORD *)this + 2) - v6) >> 2 )
        invalid_parameter_noinfo();
      v7 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 944;
      memset(v10, 0, sizeof(v10));
      sub_101786E0(1.0);
      v10[15] = 1.0;
      sub_10179590(v7, (char *)this + 44, v10);
      v8 = *((_DWORD *)this + 1);
      if ( !v8 || i >= (*((_DWORD *)this + 2) - v8) >> 2 )
        invalid_parameter_noinfo();
      v9 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v9 + 36))(v9, v10);
    }
  }
}
