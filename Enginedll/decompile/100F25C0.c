/*
 * func-name: ?IsPlaying@Model@@QAE_NH@Z
 * func-address: 0x100f25c0
 * callers: 0x100f29a0, 0x100f29b0
 * callees: 0x100fdc40
 */

bool __thiscall Model::IsPlaying(Model *this, unsigned int a2)
{
  unsigned int v3; // ebp
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  double v8; // [esp+18h] [ebp-8h] BYREF

  if ( !*((_DWORD *)this + 94) )
    return 0;
  v3 = a2;
  if ( a2 == -1 )
    return 0;
  v4 = *((_DWORD *)this + 96);
  if ( !v4 || a2 >= (*((_DWORD *)this + 97) - v4) >> 4 )
    invalid_parameter_noinfo();
  if ( *(_BYTE *)(16 * v3 + *((_DWORD *)this + 96)) )
  {
    v5 = *((_DWORD *)this + 94);
    a2 = 0;
    LODWORD(v8) = 0;
    (*(void (__stdcall **)(int, unsigned int, unsigned int *))(*(_DWORD *)v5 + 44))(v5, v3, &a2);
    if ( a2 && (v6 = 0, *((int *)this + 112) > 0) )
    {
      while ( 1 )
      {
        (*(void (__stdcall **)(_DWORD, int, double *))(**((_DWORD **)this + 94) + 68))(*((_DWORD *)this + 94), v6, &v8);
        if ( LODWORD(v8) == a2 )
          break;
        if ( ++v6 >= *((_DWORD *)this + 112) )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v8 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 94) + 60))(*((_DWORD *)this + 94));
    return *(float *)(sub_100FDC40(v3) + 8) > v8;
  }
}
