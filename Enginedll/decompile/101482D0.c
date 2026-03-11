/*
 * func-name: ?onHit@OutpopRaycastReportIgnore@@UAE_NABUNxRaycastHit@@@Z
 * func-address: 0x101482d0
 * callers: none
 * callees: 0x1006ca30, 0x100913d0, 0x10100ca0, 0x10148830
 */

char __thiscall OutpopRaycastReportIgnore::onHit(OutpopRaycastReportIgnore *this, const struct NxRaycastHit *a2)
{
  _DWORD *v3; // ebx
  unsigned int i; // edi
  int v5; // esi
  int v6; // ecx
  char *v7; // esi
  unsigned int v8; // edi
  char *v9; // esi
  unsigned int v10; // ebx
  char *v11; // ebx
  char *v12; // edx
  int v13; // eax
  float *v14; // eax
  float *v15; // eax
  char *Destination; // [esp+10h] [ebp-18h]
  char *v18; // [esp+14h] [ebp-14h]
  _DWORD *v19; // [esp+18h] [ebp-10h]
  float v20[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = *(_DWORD **)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 4))(*(_DWORD *)a2) + 4);
  v19 = v3;
  if ( v3 )
  {
    for ( i = 0; ; ++i )
    {
      v5 = *((_DWORD *)this + 28);
      v6 = *(_DWORD *)(v5 + 4);
      if ( !v6 || i >= (*(_DWORD *)(v5 + 8) - v6) >> 2 )
        break;
      if ( v3[1] == *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * i) )
        return 1;
    }
  }
  if ( *((float *)this + 29) > (double)*((float *)a2 + 9) )
  {
    v7 = (char *)*((_DWORD *)this + 8);
    if ( *((_DWORD *)this + 7) > (unsigned int)v7 )
      invalid_parameter_noinfo();
    v8 = *((_DWORD *)this + 7);
    if ( v8 > *((_DWORD *)this + 8) )
      invalid_parameter_noinfo();
    if ( (char *)v8 != v7 )
      *((_DWORD *)this + 8) = sub_1006CA30(v7, *((char **)this + 8), v8);
    v9 = (char *)*((_DWORD *)this + 12);
    if ( *((_DWORD *)this + 11) > (unsigned int)v9 )
      invalid_parameter_noinfo();
    v10 = *((_DWORD *)this + 11);
    if ( v10 > *((_DWORD *)this + 12) )
      invalid_parameter_noinfo();
    if ( (char *)v10 != v9 )
      *((_DWORD *)this + 12) = sub_1006CA30(v9, *((char **)this + 12), v10);
    v11 = (char *)*((_DWORD *)this + 16);
    if ( *((_DWORD *)this + 15) > (unsigned int)v11 )
      invalid_parameter_noinfo();
    v12 = (char *)*((_DWORD *)this + 15);
    Destination = v12;
    if ( (unsigned int)v12 > *((_DWORD *)this + 16) )
    {
      invalid_parameter_noinfo();
      v12 = Destination;
    }
    if ( v12 != v11 )
    {
      v13 = (*((_DWORD *)this + 16) - (int)v11) >> 2;
      v18 = &v12[4 * v13];
      if ( v13 > 0 )
        memmove_s(Destination, 4 * v13, v11, 4 * v13);
      *((_DWORD *)this + 16) = v18;
    }
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 21) = -1;
    *((double *)this + 2) = *((float *)a2 + 9);
    v14 = NxHelper::ToVector(v20, (float *)a2 + 4);
    sub_100913D0((_DWORD *)this + 6, v14);
    v15 = NxHelper::ToVector(v20, (float *)a2 + 1);
    sub_100913D0((_DWORD *)this + 10, v15);
    sub_10148830((int)this + 56, (int)a2);
    if ( v19 )
    {
      *((_DWORD *)this + 18) = *v19;
      *((_DWORD *)this + 21) = v19[1];
    }
    *((_BYTE *)this + 4) = 1;
    *((float *)this + 29) = *((float *)a2 + 9);
  }
  return 1;
}
