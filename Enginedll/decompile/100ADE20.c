/*
 * func-name: ?SetValueFloat@CRENumericEdit@@UAEXM@Z
 * func-address: 0x100ade20
 * callers: none
 * callees: 0x100a56d0, 0x100ac120, 0x101a24ac, 0x101a253a
 */

void __thiscall CRENumericEdit::SetValueFloat(CRENumericEdit *this, float a2)
{
  double v3; // st7
  double v4; // st7
  int v5; // edi
  bool v6; // c3
  const wchar_t *v7; // eax
  int *v8; // esi
  char *v9; // ebx
  int v10; // eax
  WCHAR v11; // cx
  WCHAR *v12; // eax
  int *v13; // esi
  _BYTE v14[4]; // [esp+24h] [ebp-F4h] BYREF
  wchar_t *v15[6]; // [esp+28h] [ebp-F0h] BYREF
  float v16; // [esp+40h] [ebp-D8h]
  WCHAR WideCharStr[100]; // [esp+44h] [ebp-D4h] BYREF
  int v18; // [esp+114h] [ebp-4h]

  if ( *((float *)this + 182) <= (double)a2 )
  {
    if ( *((float *)this + 181) >= (double)a2 )
      goto LABEL_6;
    v3 = *((float *)this + 181);
  }
  else
  {
    v3 = *((float *)this + 182);
  }
  a2 = v3;
LABEL_6:
  v16 = ((double (__thiscall *)(CRENumericEdit *, float *, int))*(_DWORD *)(*(_DWORD *)this + 212))(this, &a2, 2);
  v4 = v16;
  v5 = 2;
  *((float *)this + 178) = v16;
  if ( v4 < 10000.0 )
  {
    if ( v4 < 1000.0 )
    {
      if ( v4 < 100.0 )
      {
        if ( v4 < 10.0 )
        {
          if ( v4 >= 1.0 )
            v5 = 3;
        }
        else
        {
          v5 = 4;
        }
      }
      else
      {
        v5 = 5;
      }
    }
    else
    {
      v5 = 6;
    }
  }
  else
  {
    v5 = 7;
  }
  if ( v4 > 0.090000004 || v4 <= 0.0 )
  {
    v9 = (char *)operator new(0x63u);
    gcvt(*((float *)this + 178), v5, v9);
    MultiByteToWideChar(0, 0, v9, -1, WideCharStr, 99);
    v10 = 0;
    while ( 1 )
    {
      v11 = WideCharStr[v10];
      if ( v11 == 46 && !WideCharStr[v10 + 1] )
      {
        WideCharStr[v10 + 1] = 48;
        WideCharStr[v10 + 2] = 48;
        WideCharStr[v10 + 3] = 0;
        goto LABEL_49;
      }
      if ( v10 >= 2 && !v11 && WideCharStr[v10 - 2] == 46 )
        break;
      if ( ++v10 >= 99 )
        goto LABEL_49;
    }
    v12 = &WideCharStr[v10];
    *v12 = 48;
    v12[1] = 0;
LABEL_49:
    v13 = (int *)*((_DWORD *)this + 190);
    CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(v13 + 133), WideCharStr);
    CREEditBox::PlaceCaret((CREEditBox *)v13, v13[135]);
    v13[189] = v13[187];
    operator delete[](v9);
  }
  else
  {
    std::wstring::wstring(v14);
    v6 = 0.0099999998 == *((float *)this + 178);
    v18 = 0;
    if ( v6 )
    {
      std::wstring::operator=(v14, L"0.01");
    }
    else if ( 0.02 == *((float *)this + 178) )
    {
      std::wstring::operator=(v14, L"0.02");
    }
    else if ( *((float *)this + 178) == 0.02999999932944775 )
    {
      std::wstring::operator=(v14, L"0.03");
    }
    else if ( 0.039999999 == *((float *)this + 178) )
    {
      std::wstring::operator=(v14, L"0.04");
    }
    else if ( *((float *)this + 178) == 0.05000000074505806 )
    {
      std::wstring::operator=(v14, L"0.05");
    }
    else if ( *((float *)this + 178) == 0.05999999865889549 )
    {
      std::wstring::operator=(v14, L"0.06");
    }
    else if ( 0.07 == *((float *)this + 178) )
    {
      std::wstring::operator=(v14, L"0.07");
    }
    else if ( 0.079999998 == *((float *)this + 178) )
    {
      std::wstring::operator=(v14, L"0.08");
    }
    else if ( 0.090000004 == *((float *)this + 178) )
    {
      std::wstring::operator=(v14, L"0.09");
    }
    v7 = v15[0];
    if ( v15[5] < (wchar_t *)8 )
      v7 = (const wchar_t *)v15;
    v8 = (int *)*((_DWORD *)this + 190);
    CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(v8 + 133), v7);
    CREEditBox::PlaceCaret((CREEditBox *)v8, v8[135]);
    v8[189] = v8[187];
    v18 = -1;
    std::wstring::~wstring(v14);
  }
}
