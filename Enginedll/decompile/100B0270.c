/*
 * func-name: ?SetDefaultElement@CREDialog@@QAEJIIPAVCREElement@@@Z
 * func-address: 0x100b0270
 * callers: 0x100b7400
 * callees: 0x1006c5d0, 0x101a2534
 */

int __thiscall CREDialog::SetDefaultElement(CREDialog *this, unsigned int a2, unsigned int a3, struct CREElement *a4)
{
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edx
  char *v9; // ebx

  v5 = *((_DWORD *)this + 195);
  v6 = 0;
  if ( v5 <= 0 )
  {
LABEL_6:
    v9 = (char *)operator new(0xCCu);
    if ( v9 )
    {
      v9[36] = 0;
      *((_DWORD *)v9 + 2) = -1;
      *((_DWORD *)v9 + 1) = a3;
      *(_DWORD *)v9 = a2;
      qmemcpy(v9 + 8, a4, 0xC4u);
      if ( sub_1006C5D0((int)this + 776, *((_DWORD *)this + 195) + 1) >= 0 )
        *(_DWORD *)(*((_DWORD *)this + 194) + 4 * (*((_DWORD *)this + 195))++) = v9;
      return 0;
    }
    else
    {
      return -2147024882;
    }
  }
  else
  {
    v7 = (_DWORD *)*((_DWORD *)this + 194);
    while ( 1 )
    {
      v8 = (_DWORD *)*v7;
      if ( *(_DWORD *)*v7 == a2 && v8[1] == a3 )
        break;
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_6;
    }
    qmemcpy(v8 + 2, a4, 0xC4u);
    return 0;
  }
}
