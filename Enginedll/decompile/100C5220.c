/*
 * func-name: ?ResetFonts@CREDialog@@QAEXM@Z
 * func-address: 0x100c5220
 * callers: none
 * callees: 0x100a9db0, 0x101a26a0
 */

void __thiscall CREDialog::ResetFonts(CREDialog *this, float a2)
{
  int i; // edi
  int v4; // eax
  _DWORD *v5; // ebx
  unsigned int *v6; // ebx

  for ( i = 0; i < *((_DWORD *)this + 189); ++i )
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
    v4 = 0;
    if ( &dword_11240B1C )
    {
      v5 = (_DWORD *)(*((_DWORD *)this + 188) + 4 * i);
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
      v4 = *(_DWORD *)(dword_11240B30 + 4 * *v5);
    }
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v4 + 520) + 64))(*(_DWORD *)(v4 + 520));
    v6 = (unsigned int *)(*((_DWORD *)this + 188) + 4 * i);
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
    CREDialogResourceManager::CreateFontW((CREDialogResourceManager *)&dword_11240B1C, *v6, a2);
  }
}
