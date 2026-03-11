/*
 * func-name: ?GetFont@Canvas@@UAEXW4FONT_TYPE@@AAPAVCFont@RECanvas@@AA_NAAH3@Z
 * func-address: 0x10066a20
 * callers: none
 * callees: 0x100956d0
 */

char __thiscall Canvas::GetFont(int this, int a2, _DWORD *a3, _BYTE *a4, _DWORD *a5, _DWORD *a6)
{
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  if ( a2 < 16 )
  {
    *a5 = 1;
    *a6 = 1;
    switch ( a2 )
    {
      case 0:
        LOBYTE(v14) = (_BYTE)a3;
        *a3 = *(_DWORD *)(this + 12);
        *a4 = *(_BYTE *)(this + 76);
        break;
      case 1:
        *a3 = *(_DWORD *)(this + 16);
        LOBYTE(v14) = (_BYTE)a4;
        *a4 = *(_BYTE *)(this + 77);
        break;
      case 2:
        *a3 = *(_DWORD *)(this + 20);
        LOBYTE(v14) = *(_BYTE *)(this + 78);
        *a4 = v14;
        break;
      case 3:
        LOBYTE(v14) = (_BYTE)a3;
        *a3 = *(_DWORD *)(this + 24);
        *a4 = *(_BYTE *)(this + 79);
        break;
      case 4:
        *a3 = *(_DWORD *)(this + 28);
        *a4 = *(_BYTE *)(this + 80);
        goto LABEL_24;
      default:
LABEL_24:
        LOBYTE(v14) = Error("Impossible");
        break;
    }
  }
  else
  {
    v7 = *(_DWORD *)(this + 36);
    v8 = a2 - 16;
    if ( !v7 || v8 >= (*(_DWORD *)(this + 40) - v7) / 52 )
      Error("Invalid font index (%d)", a2);
    v9 = *(_DWORD *)(this + 36);
    if ( !v9 || v8 >= (*(_DWORD *)(this + 40) - v9) / 52 )
      invalid_parameter_noinfo();
    v10 = 52 * v8;
    *a3 = *(_DWORD *)(52 * v8 + *(_DWORD *)(this + 36));
    v11 = *(_DWORD *)(this + 36);
    if ( !v11 || v8 >= (*(_DWORD *)(this + 40) - v11) / 52 )
      invalid_parameter_noinfo();
    *a4 = *(_BYTE *)(v10 + *(_DWORD *)(this + 36) + 43);
    v12 = *(_DWORD *)(this + 36);
    if ( !v12 || v8 >= (*(_DWORD *)(this + 40) - v12) / 52 )
      invalid_parameter_noinfo();
    *a5 = *(_DWORD *)(*(_DWORD *)(this + 36) + v10 + 44);
    v13 = *(_DWORD *)(this + 36);
    if ( !v13 || v8 >= (*(_DWORD *)(this + 40) - v13) / 52 )
      invalid_parameter_noinfo();
    v14 = *(_DWORD *)(this + 36);
    *a6 = *(_DWORD *)(v14 + v10 + 48);
  }
  return v14;
}
