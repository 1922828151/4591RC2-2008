/*
 * func-name: ?SetAnimationWeight@Model@@QAEXHMM@Z
 * func-address: 0x100f1cf0
 * callers: none
 * callees: none
 */

void __userpurge Model::SetAnimationWeight(Model *this@<ecx>, int a2, float a3, float a4, int a5, int a6)
{
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  void (__stdcall **v10)(_DWORD, int, int, _DWORD, _DWORD); // ebx
  double v11; // [esp+2Ch] [ebp-18h]
  int v12; // [esp+40h] [ebp-4h] BYREF

  v7 = 0;
  if ( *((_DWORD *)this + 94) )
  {
    v8 = a2;
    if ( a2 != -1 )
    {
      v9 = *((_DWORD *)this + 94);
      a2 = 0;
      v12 = 0;
      (*(void (__stdcall **)(int, int, int *))(*(_DWORD *)v9 + 44))(v9, v8, &a2);
      if ( a2 )
      {
        if ( *((int *)this + 112) > 0 )
        {
          while ( 1 )
          {
            (*(void (__stdcall **)(_DWORD, int, int *))(**((_DWORD **)this + 94) + 68))(
              *((_DWORD *)this + 94),
              v7,
              &v12);
            if ( v12 == a2 )
              break;
            if ( ++v7 >= *((_DWORD *)this + 112) )
              return;
          }
          v10 = (void (__stdcall **)(_DWORD, int, int, _DWORD, _DWORD))(**((_DWORD **)this + 94) + 112);
          v11 = ((double (__stdcall *)(_DWORD, _DWORD, _DWORD, int))*(_DWORD *)(**((_DWORD **)this + 94) + 60))(
                  *((_DWORD *)this + 94),
                  COERCE_UNSIGNED_INT64(a4),
                  HIDWORD(COERCE_UNSIGNED_INT64(a4)),
                  1);
          (*v10)(*((_DWORD *)this + 94), v7, a6, LODWORD(v11), HIDWORD(v11));
        }
      }
    }
  }
}
