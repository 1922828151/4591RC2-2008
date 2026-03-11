/*
 * func-name: sub_101042C0
 * func-address: 0x101042c0
 * callers: 0x101042c0, 0x10104910
 * callees: 0x10012a30, 0x10061060, 0x10063830, 0x101042c0
 */

void __thiscall sub_101042C0(int this, Camera *a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // ebp
  int v8; // ecx
  int v9; // edi
  _DWORD *v10; // ebx
  void (__cdecl *v11)(); // ebx
  unsigned int i; // edi
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  void (__thiscall ***v16)(_DWORD, Camera *, int, _DWORD, bool, _DWORD, int); // ecx
  bool v17; // zf
  int v18; // [esp+Ch] [ebp-4h]

  v6 = 2;
  v18 = 2;
  if ( !(_BYTE)a5 )
    goto LABEL_7;
  v8 = *(_DWORD *)(this + 104);
  if ( v8 )
  {
    if ( (*(_DWORD *)(this + 108) - v8) >> 2 == 1 )
      goto LABEL_7;
  }
  v6 = Camera::BoxInFrustum(a2, (const struct BBox *)this, 0.0, 0);
  v18 = v6;
  if ( v6 )
    goto LABEL_7;
  if ( sub_10061060((float *)this, (float *)a2 + 88) )
  {
    v6 = 1;
    v18 = 1;
LABEL_7:
    v9 = a6;
    if ( a6 > 0 )
    {
      v10 = (_DWORD *)(this + 52);
      a5 = a6;
      do
      {
        if ( *v10 )
          sub_101042C0(a2, a3, (int)a4, v6 != 2, v9);
        ++v10;
        --a5;
      }
      while ( a5 );
    }
    v11 = invalid_parameter_noinfo;
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(this + 104);
        if ( !v13 || i >= (*(_DWORD *)(this + 108) - v13) >> 2 )
          return;
        v14 = *(_DWORD *)(this + 104);
        if ( **(_DWORD **)(v14 + 4 * i) )
        {
          if ( !v14 || i >= (*(_DWORD *)(this + 108) - v14) >> 2 )
            v11();
          v15 = **(_DWORD **)(*(_DWORD *)(this + 104) + 4 * i);
          v16 = *(void (__thiscall ****)(_DWORD, Camera *, int, _DWORD, bool, _DWORD, int))(v15 + 716);
          if ( v16 )
          {
            if ( *(_DWORD *)(v15 + 1168) != dword_11240DEC )
            {
              v17 = *(_BYTE *)(v15 + 816) == 0;
              *(_DWORD *)(v15 + 1168) = dword_11240DEC;
              if ( v17 && (!*(_BYTE *)(a3 + 781) || !*(_BYTE *)(v15 + 364)) )
                break;
            }
          }
        }
LABEL_27:
        ++i;
      }
      if ( *(_BYTE *)(v15 + 824) )
      {
        a5 = v15;
        std::vector<Actor *>::push_back(a4, &a5);
        goto LABEL_27;
      }
      (**v16)(v16, a2, a3, *(unsigned __int8 *)(v15 + 726), v18 != 2, 0, 1);
      v11 = invalid_parameter_noinfo;
    }
  }
}
