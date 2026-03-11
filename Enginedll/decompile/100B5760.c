/*
 * func-name: ?RemoveAllTexture@CREDialog@@QAEXXZ
 * func-address: 0x100b5760
 * callers: 0x100c6de0
 * callees: 0x100a9980, 0x101a26a0
 */

void __thiscall CREDialog::RemoveAllTexture(CREDialog *this)
{
  int i; // esi
  int v3; // ebx

  for ( i = 0; i < *((_DWORD *)this + 186); ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 185) + 4 * i);
    if ( v3 != -1 )
    {
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
      CREDialogResourceManager::RemoveTexture((CREDialogResourceManager *)&dword_11240B1C, v3);
      if ( i >= 0 && i < *((_DWORD *)this + 186) )
        *(_DWORD *)(*((_DWORD *)this + 185) + 4 * i) = -1;
    }
  }
}
