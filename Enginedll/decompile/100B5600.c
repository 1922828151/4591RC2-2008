/*
 * func-name: ?SetTexture@CREDialog@@QAEJIPB_W@Z
 * func-address: 0x100b5600
 * callers: 0x100b7400
 * callees: 0x1006c5d0, 0x100af9f0, 0x101a26a0
 */

int __thiscall CREDialog::SetTexture(CREDialog *this, signed int a2, wchar_t *String2)
{
  unsigned int v4; // eax
  _DWORD *v5; // esi
  unsigned int v6; // edi
  int v7; // eax

  v4 = *((_DWORD *)this + 186);
  if ( v4 <= a2 )
  {
    v5 = (_DWORD *)((char *)this + 740);
    v6 = a2 - v4 + 1;
    do
    {
      if ( sub_1006C5D0((int)this + 740, *((_DWORD *)this + 186) + 1) >= 0 )
        *(_DWORD *)(*v5 + 4 * (*((_DWORD *)this + 186))++) = -1;
      --v6;
    }
    while ( v6 );
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
  v7 = CREDialogResourceManager::AddTexture((CREDialogResourceManager *)&dword_11240B1C, String2);
  if ( a2 >= 0 && a2 < *((_DWORD *)this + 186) )
    *(_DWORD *)(*((_DWORD *)this + 185) + 4 * a2) = v7;
  return 0;
}
