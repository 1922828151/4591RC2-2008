/*
 * func-name: ?SetFont@CREDialog@@QAEJIPB_WJJ@Z
 * func-address: 0x100b5470
 * callers: 0x100b7400
 * callees: 0x1006c5d0, 0x100af8e0, 0x101a26a0
 */

int __thiscall CREDialog::SetFont(CREDialog *this, signed int a2, wchar_t *String2, int a4, int a5)
{
  unsigned int v6; // eax
  _DWORD *v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // eax

  v6 = *((_DWORD *)this + 189);
  if ( v6 <= a2 )
  {
    v7 = (_DWORD *)((char *)this + 752);
    v8 = a2 - v6 + 1;
    do
    {
      if ( sub_1006C5D0((int)this + 752, *((_DWORD *)this + 189) + 1) >= 0 )
        *(_DWORD *)(*v7 + 4 * (*((_DWORD *)this + 189))++) = -1;
      --v8;
    }
    while ( v8 );
  }
  if ( (dword_11240B40 & 1) == 0 )
  {
    dword_11240B40 |= 1u;
    dword_11240B24 = 0;
    dword_11240B28 = 0;
    dword_11240B2C = 0;
    dword_11240B30 = 0;
    dword_11240B34 = 0;
    dword_11240B38 = 0;
    dword_11240B3C = 0;
    dword_11240B1C = 0;
    dword_11240B20 = 0;
    atexit(sub_101B8F70);
  }
  v9 = CREDialogResourceManager::AddFont((CREDialogResourceManager *)&dword_11240B1C, String2, a4, a5);
  if ( a2 >= 0 && a2 < *((_DWORD *)this + 189) )
    *(_DWORD *)(*((_DWORD *)this + 188) + 4 * a2) = v9;
  return 0;
}
