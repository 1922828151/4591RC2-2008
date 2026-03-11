/*
 * func-name: ?PlaceCaret@CPasswordEB@@IAEXH@Z
 * func-address: 0x100a6fb0
 * callers: 0x100a7200, 0x100c0490
 * callees: 0x1006ab80, 0x100a5480, 0x100a57a0, 0x100a57f0
 */

void __thiscall CPasswordEB::PlaceCaret(CPasswordEB *this, int a2)
{
  int v3; // ebx
  int v4; // edi
  bool v5; // zf
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  bool v9; // cc
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int *v13; // edi
  int v14; // ebx
  int v15; // edx
  int v16; // [esp+4h] [ebp-14h] BYREF
  int v17; // [esp+8h] [ebp-10h] BYREF
  int v18; // [esp+Ch] [ebp-Ch] BYREF
  int v19; // [esp+10h] [ebp-8h] BYREF
  int *v20; // [esp+14h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 143) > *((_DWORD *)this + 141) )
  {
    v3 = *((_DWORD *)this + 190);
    v4 = a2;
    *((_DWORD *)this + 187) = a2;
    v5 = *((_DWORD *)this + 200) == 0;
    v17 = 0;
    if ( !v5 && (!*((_BYTE *)this + 808) || CREEditBox::CUniBuffer::Analyse((CPasswordEB *)((char *)this + 792)) >= 0) )
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 203), v3, 0, &v17);
    v5 = *((_DWORD *)this + 200) == 0;
    a2 = v17;
    v16 = 0;
    if ( !v5 && (!*((_BYTE *)this + 808) || CREEditBox::CUniBuffer::Analyse((CPasswordEB *)((char *)this + 792)) >= 0) )
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 203), v4, 0, &v16);
    if ( v4 == *((_DWORD *)this + 200) )
    {
      v6 = v16;
      v19 = v16;
    }
    else
    {
      CREEditBox::CUniBuffer::CPtoX((CPasswordEB *)((char *)this + 792), v4, (int *)1, &v19);
      v6 = v19;
    }
    if ( v16 >= v17 )
    {
      v10 = *((_DWORD *)this + 143) - *((_DWORD *)this + 141);
      if ( v6 > v10 + v17 && v6 > a2 + v10 )
      {
        do
        {
          v11 = (*((_DWORD *)this + 143) - *((_DWORD *)this + 141)) / 4;
          if ( !v11 )
            v11 = 20;
          a2 += v11;
          CREEditBox::CUniBuffer::XtoCP((void **)this + 198, a2, &v18, (int *)&v20);
          v5 = *((_DWORD *)this + 200) == 0;
          v12 = v18;
          v13 = v20;
          v14 = v18;
          a2 = 0;
          if ( !v5 )
          {
            if ( !*((_BYTE *)this + 808) || CREEditBox::CUniBuffer::Analyse((CPasswordEB *)((char *)this + 792)) >= 0 )
              CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 203), v14, (int)v13, &a2);
            v12 = v18;
          }
          if ( v20 && v12 < *((_DWORD *)this + 200) )
            ++v12;
          v15 = a2;
          *((_DWORD *)this + 190) = v12;
        }
        while ( v19 > *((_DWORD *)this + 143) + v15 - *((_DWORD *)this + 141) );
      }
    }
    else if ( v16 < a2 )
    {
      do
      {
        v7 = (*((_DWORD *)this + 143) - *((_DWORD *)this + 141)) / 4;
        if ( !v7 )
          v7 = 20;
        a2 -= v7;
        CREEditBox::CUniBuffer::XtoCP((void **)this + 198, a2, &v18, (int *)&v20);
        v5 = *((_DWORD *)this + 200) == 0;
        v8 = v18;
        a2 = 0;
        if ( !v5
          && (!*((_BYTE *)this + 808) || CREEditBox::CUniBuffer::Analyse((CPasswordEB *)((char *)this + 792)) >= 0) )
        {
          CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 203), v8, 0, &a2);
        }
        v9 = v16 < a2;
        *((_DWORD *)this + 190) = v18;
      }
      while ( v9 );
    }
  }
}
