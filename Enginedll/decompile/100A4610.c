/*
 * func-name: ?GetImeId@CREIMEEditBox@@KAKI@Z
 * func-address: 0x100a4610
 * callers: 0x100a4d40, 0x100acec0
 * callees: 0x1006a760, 0x1006ad60, 0x10140aa0
 */

int __cdecl CREIMEEditBox::GetImeId(unsigned int a1)
{
  unsigned int v1; // edi
  int FileVersionInfoSizeA; // eax
  void **v4; // esi
  HANDLE ProcessHeap; // eax
  unsigned int *v6; // edi
  unsigned __int16 v7; // dx
  unsigned int v8; // eax
  HANDLE v9; // eax
  SIZE_T v10; // [esp-10h] [ebp-420h]
  void *v11; // [esp+4h] [ebp-40Ch] BYREF
  char *v12; // [esp+8h] [ebp-408h] BYREF
  unsigned int v13; // [esp+Ch] [ebp-404h] BYREF
  struct HIMC__ String1[256]; // [esp+10h] [ebp-400h] BYREF

  v1 = a1;
  if ( a1 >= 2 )
    return 0;
  if ( (HIMC)dword_11240AE4 != CREIMEEditBox::s_hklCurrent )
  {
    dword_11240AE4 = (int)CREIMEEditBox::s_hklCurrent;
    if ( CREIMEEditBox::s_hklCurrent != (HIMC)-536345596
      && CREIMEEditBox::s_hklCurrent != (HIMC)-536280060
      && CREIMEEditBox::s_hklCurrent != (HIMC)-535951356
      || !CREIMEEditBox::_ImmGetIMEFileNameA(CREIMEEditBox::s_hklCurrent, (unsigned int)String1, 0x3FFu) )
    {
      dword_11240AE0 = 0;
      dword_11240ADC[0] = 0;
      return dword_11240ADC[a1];
    }
    if ( !CREIMEEditBox::_GetReadingString
      && CompareStringA(0x409u, 1u, (PCNZCH)String1, -1, "TINTLGNT.IME", -1) != 2
      && CompareStringA(0x409u, 1u, (PCNZCH)String1, -1, "CINTLGNT.IME", -1) != 2
      && CompareStringA(0x409u, 1u, (PCNZCH)String1, -1, "MSTCIPHA.IME", -1) != 2
      && CompareStringA(0x409u, 1u, (PCNZCH)String1, -1, "PINTLGNT.IME", -1) != 2
      && CompareStringA(0x409u, 1u, (PCNZCH)String1, -1, "MSSCIPYA.IME", -1) != 2 )
    {
      dword_11240AE0 = 0;
      dword_11240ADC[0] = 0;
      return dword_11240ADC[a1];
    }
    FileVersionInfoSizeA = CREIMEEditBox::_GetFileVersionInfoSizeA(String1, (int)&v12);
    v4 = (void **)FileVersionInfoSizeA;
    if ( FileVersionInfoSizeA )
    {
      v10 = FileVersionInfoSizeA;
      ProcessHeap = GetProcessHeap();
      v6 = (unsigned int *)HeapAlloc(ProcessHeap, 0, v10);
      if ( !v6 )
      {
LABEL_36:
        v1 = a1;
        return dword_11240ADC[v1];
      }
      if ( CREIMEEditBox::_GetFileVersionInfoA(String1, v12, v4, v6)
        && CREIMEEditBox::_VerQueryValueA(v6, "\\", &v11, &v13) )
      {
        LOBYTE(v7) = 0;
        HIBYTE(v7) = *((_DWORD *)v11 + 2);
        v8 = (*((_DWORD *)v11 + 2) & 0xFFFF0000 | v7) << 8;
        if ( !CREIMEEditBox::_GetReadingString )
        {
          if ( (_WORD)CREIMEEditBox::s_hklCurrent == 1028 )
          {
            if ( v8 != 67239936
              && v8 != 67305472
              && v8 != 67371008
              && v8 != 83886080
              && v8 != 83951616
              && v8 != 84017152
              && v8 != 100663296 )
            {
              goto LABEL_35;
            }
          }
          else if ( (_WORD)CREIMEEditBox::s_hklCurrent != 2052 || v8 != 67174400 && v8 != 67239936 && v8 != 84082688 )
          {
            goto LABEL_35;
          }
        }
        dword_11240ADC[0] = v8 | (unsigned __int16)CREIMEEditBox::s_hklCurrent;
        dword_11240AE0 = *((_DWORD *)v11 + 3);
      }
LABEL_35:
      v9 = GetProcessHeap();
      HeapFree(v9, 0, v6);
      goto LABEL_36;
    }
  }
  return dword_11240ADC[v1];
}
