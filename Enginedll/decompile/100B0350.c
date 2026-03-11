/*
 * func-name: ?SetElement@CREControl@@QAEJIPAVCREElement@@@Z
 * func-address: 0x100b0350
 * callers: 0x100b3480
 * callees: 0x1006c5d0, 0x101a2534
 */

int __thiscall CREControl::SetElement(CREControl *this, unsigned int a2, struct CREElement *a3)
{
  int result; // eax
  unsigned int v5; // esi
  _BYTE *v6; // eax
  _BYTE *v7; // ebp

  if ( !a3 )
    return -2147024809;
  v5 = *((_DWORD *)this + 31);
  if ( v5 > a2 )
  {
LABEL_7:
    qmemcpy(*(void **)(*((_DWORD *)this + 30) + 4 * a2), a3, 0xC4u);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = operator new(0xC4u);
      v7 = v6;
      if ( !v6 )
        return -2147024882;
      v6[28] = 0;
      *(_DWORD *)v6 = -1;
      result = sub_1006C5D0((int)this + 120, *((_DWORD *)this + 31) + 1);
      if ( result < 0 )
        return result;
      *(_DWORD *)(*((_DWORD *)this + 30) + 4 * (*((_DWORD *)this + 31))++) = v7;
      if ( ++v5 > a2 )
        goto LABEL_7;
    }
  }
}
