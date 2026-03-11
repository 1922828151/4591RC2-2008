/*
 * func-name: ?Update3DParameters@SoundEmitter@@UAEXAAVVector@@0M@Z
 * func-address: 0x10054c20
 * callers: none
 * callees: 0x100971c0
 */

void __thiscall SoundEmitter::Update3DParameters(SoundEmitter *this, struct Vector *a2, struct Vector *a3, float a4)
{
  struct Vector *v5; // edi
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // edi
  int v12; // eax
  int v13; // ecx

  Engine::Instance();
  v5 = a3;
  *((_DWORD *)this + 5) = *(_DWORD *)a2;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 8) = *(_DWORD *)a3;
  *((_DWORD *)this + 9) = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  *((float *)this + 11) = a4;
  *((_DWORD *)this + 10) = v6;
  v7 = 0;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 2);
    if ( !v8 || v7 >= (*((_DWORD *)this + 3) - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v7);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9) )
    {
      v13 = *((_DWORD *)this + 2);
      if ( !v13 || v7 >= (*((_DWORD *)this + 3) - v13) >> 2 )
        invalid_parameter_noinfo();
      (*(void (__stdcall **)(struct Vector *, struct Vector *, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 2) + 4 * v7++)
                                                                      + 16))(
        a2,
        v5,
        LODWORD(a4));
    }
    else
    {
      v10 = *((_DWORD *)this + 2);
      if ( v10 > *((_DWORD *)this + 3) )
        invalid_parameter_noinfo();
      v11 = v10 + 4 * v7;
      if ( v11 > *((_DWORD *)this + 3) || v11 < *((_DWORD *)this + 2) )
        invalid_parameter_noinfo();
      v12 = (int)(*((_DWORD *)this + 3) - (v11 + 4)) >> 2;
      if ( v12 > 0 )
        memmove_s((void *const)v11, 4 * v12, (const void *const)(v11 + 4), 4 * v12);
      *((_DWORD *)this + 3) -= 4;
      v5 = a3;
    }
  }
}
