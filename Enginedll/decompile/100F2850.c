/*
 * func-name: ?SetAnimPosition@Model@@QAEXHM@Z
 * func-address: 0x100f2850
 * callers: none
 * callees: none
 */

void __userpurge Model::SetAnimPosition(
        Model *this@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        unsigned int a4,
        float a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ebp
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  double v16; // st5
  unsigned __int64 v17; // st7
  int v20; // [esp+38h] [ebp-30h]
  int v21; // [esp+3Ch] [ebp-2Ch]
  int v22; // [esp+40h] [ebp-28h] BYREF
  float v23[8]; // [esp+48h] [ebp-20h] BYREF

  if ( *((_DWORD *)this + 94) )
  {
    v10 = a4;
    if ( a4 != -1 )
    {
      v11 = *((_DWORD *)this + 94);
      a4 = 0;
      v22 = 0;
      (*(void (__stdcall **)(int, unsigned int, unsigned int *))(*(_DWORD *)v11 + 44))(v11, v10, &a4);
      if ( a4 )
      {
        v12 = 0;
        if ( *((int *)this + 112) > 0 )
        {
          while ( 1 )
          {
            (*(void (__stdcall **)(_DWORD, int, int *))(**((_DWORD **)this + 94) + 68))(
              *((_DWORD *)this + 94),
              v12,
              &v22);
            if ( v22 == a4 )
              break;
            if ( ++v12 >= *((_DWORD *)this + 112) )
              return;
          }
          if ( v12 != -1 )
          {
            (*(void (__stdcall **)(_DWORD, int, float *, int, int))(**((_DWORD **)this + 94) + 96))(
              *((_DWORD *)this + 94),
              v12,
              v23,
              a3,
              a2);
            v13 = *((_DWORD *)this + 96);
            if ( !v13 || v10 >= (*((_DWORD *)this + 97) - v13) >> 4 )
              invalid_parameter_noinfo();
            v14 = *((_DWORD *)this + 96);
            LODWORD(v23[1]) = 16 * v10 + v14;
            if ( !v14 || v10 >= (*((_DWORD *)this + 97) - v14) >> 4 )
              invalid_parameter_noinfo();
            v15 = 16 * v10 + *((_DWORD *)this + 96);
            v16 = ((double (__stdcall *)(_DWORD, int, int))*(_DWORD *)(**((_DWORD **)this + 94) + 60))(
                    *((_DWORD *)this + 94),
                    v20,
                    v21);
            *(double *)&v17 = a9;
            *(float *)(v15 + 8) = (*(float *)(LODWORD(v23[3]) + 4) - a9) / v23[6] + v16;
            (*(void (__cdecl **)(_DWORD, int, _DWORD, _DWORD))(**((_DWORD **)this + 94) + 84))(
              *((_DWORD *)this + 94),
              v12,
              v17,
              HIDWORD(v17));
          }
        }
      }
    }
  }
}
