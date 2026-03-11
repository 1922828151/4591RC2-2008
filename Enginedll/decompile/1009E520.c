/*
 * func-name: ?SetMaterial@ModelFrame@@QAEXHPAVMaterial@@@Z
 * func-address: 0x1009e520
 * callers: none
 * callees: none
 */

void __thiscall ModelFrame::SetMaterial(ModelFrame *this, unsigned int a2, struct Material *a3)
{
  int v4; // ecx
  _DWORD *v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // edi
  int i; // ebp
  int v9; // esi
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  int v15; // [esp+4h] [ebp-8h]
  _DWORD *v16; // [esp+8h] [ebp-4h]

  v4 = *((_DWORD *)this + 1);
  if ( v4 )
  {
    if ( (*((_DWORD *)this + 2) - v4) >> 2 )
    {
      v5 = (_DWORD *)**((_DWORD **)this + 1);
      v16 = v5;
      if ( v5 )
      {
        v6 = a2;
        v15 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v5 + 108))(v5, a2);
        if ( *((_DWORD *)this + 113) )
        {
          v7 = 0;
          for ( i = 0; ; i += 64 )
          {
            v9 = *((_DWORD *)this + 113);
            v10 = *(_DWORD *)(v9 + 20);
            if ( !v10 || v7 >= (*(_DWORD *)(v9 + 24) - v10) >> 6 )
              break;
            if ( *(_DWORD *)(*(_DWORD *)(v9 + 20) + i + 12) == v15 )
            {
              v11 = *((_DWORD *)this + 113);
              v12 = *(_DWORD *)(v11 + 20);
              v13 = v11 + 16;
              if ( !v12 || v7 >= (*(_DWORD *)(v13 + 8) - v12) >> 6 )
                invalid_parameter_noinfo();
              *(_DWORD *)(*(_DWORD *)(v13 + 4) + i + 12) = a3;
            }
            ++v7;
          }
          v6 = a2;
          v5 = v16;
        }
        v14 = v5[616];
        if ( !v14 || v6 >= (v5[617] - v14) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(v5[616] + 4 * v6) = a3;
      }
    }
  }
}
