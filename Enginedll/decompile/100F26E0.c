/*
 * func-name: ?SetAnimationSpeed@Model@@QAEXHM@Z
 * func-address: 0x100f26e0
 * callers: none
 * callees: none
 */

void __userpurge Model::SetAnimationSpeed(
        Model *this@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        unsigned int a4,
        float a5,
        int *a6)
{
  unsigned int v7; // edi
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  double v14; // st7
  double (__stdcall *v15)(int); // edx
  double v16; // st7
  int v17; // [esp+34h] [ebp-40h]
  int v20; // [esp+48h] [ebp-2Ch] BYREF
  double v21; // [esp+4Ch] [ebp-28h]
  double v22[3]; // [esp+54h] [ebp-20h] BYREF

  if ( *((_DWORD *)this + 94) )
  {
    v7 = a4;
    if ( a4 != -1 )
    {
      v8 = *((_DWORD *)this + 94);
      a4 = 0;
      v20 = 0;
      (*(void (__stdcall **)(int, unsigned int, unsigned int *))(*(_DWORD *)v8 + 44))(v8, v7, &a4);
      if ( a4 )
      {
        v9 = 0;
        if ( *((int *)this + 112) > 0 )
        {
          while ( 1 )
          {
            (*(void (__stdcall **)(_DWORD, int, int *))(**((_DWORD **)this + 94) + 68))(
              *((_DWORD *)this + 94),
              v9,
              &v20);
            if ( v20 == a4 )
              break;
            if ( ++v9 >= *((_DWORD *)this + 112) )
              return;
          }
          if ( v9 != -1 )
          {
            (*(void (__stdcall **)(_DWORD, int, double *, int, int))(**((_DWORD **)this + 94) + 96))(
              *((_DWORD *)this + 94),
              v9,
              v22,
              a2,
              a3);
            v10 = *((_DWORD *)this + 96);
            if ( !v10 || v7 >= (*((_DWORD *)this + 97) - v10) >> 4 )
              invalid_parameter_noinfo();
            v11 = *((_DWORD *)this + 96);
            LODWORD(v22[0]) = 16 * v7 + v11;
            if ( !v11 || v7 >= (*((_DWORD *)this + 97) - v11) >> 4 )
              invalid_parameter_noinfo();
            v12 = *a6;
            v22[0] = *(float *)(LODWORD(v22[0]) + 4);
            v13 = 16 * v7 + *((_DWORD *)this + 96);
            v14 = ((double (__stdcall *)(int *))*(_DWORD *)(v12 + 20))(a6);
            v15 = *(double (__stdcall **)(int))(**((_DWORD **)this + 94) + 60);
            v17 = *((_DWORD *)this + 94);
            v21 = (v21 - v14) / a5;
            v16 = v15(v17);
            *(float *)(v13 + 8) = v16 + v21;
            (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 94) + 76))(
              *((_DWORD *)this + 94),
              v9,
              LODWORD(a5));
          }
        }
      }
    }
  }
}
