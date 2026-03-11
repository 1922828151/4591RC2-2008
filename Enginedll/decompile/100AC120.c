/*
 * func-name: ?PlaceCaret@CREEditBox@@IAEXH@Z
 * func-address: 0x100ac120
 * callers: 0x100ac3a0, 0x100ac3f0, 0x100ac480, 0x100ac530, 0x100ac790, 0x100ac9a0, 0x100acbe0, 0x100ad9a0, 0x100adae0, 0x100add90, 0x100ade20, 0x100bdfc0, 0x100c0c50, 0x100c5fd0, 0x100c95f0, 0x100cb220, 0x100cb320, 0x100cc180
 * callees: 0x1006ab80, 0x100a5480, 0x100a57a0, 0x100a57f0
 */

void __thiscall CREEditBox::PlaceCaret(CREEditBox *this, int a2)
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
    v5 = *((_DWORD *)this + 135) == 0;
    v17 = 0;
    if ( !v5 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREEditBox *)((char *)this + 532)) >= 0) )
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v3, 0, &v17);
    v5 = *((_DWORD *)this + 135) == 0;
    a2 = v17;
    v16 = 0;
    if ( !v5 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREEditBox *)((char *)this + 532)) >= 0) )
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v4, 0, &v16);
    if ( v4 == *((_DWORD *)this + 135) )
    {
      v6 = v16;
      v19 = v16;
    }
    else
    {
      CREEditBox::CUniBuffer::CPtoX((CREEditBox *)((char *)this + 532), v4, (int *)1, &v19);
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
          CREEditBox::CUniBuffer::XtoCP((void **)this + 133, a2, &v18, (int *)&v20);
          v5 = *((_DWORD *)this + 135) == 0;
          v12 = v18;
          v13 = v20;
          v14 = v18;
          a2 = 0;
          if ( !v5 )
          {
            if ( !*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREEditBox *)((char *)this + 532)) >= 0 )
              CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v14, (int)v13, &a2);
            v12 = v18;
          }
          if ( v20 && v12 < *((_DWORD *)this + 135) )
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
        CREEditBox::CUniBuffer::XtoCP((void **)this + 133, a2, &v18, (int *)&v20);
        v5 = *((_DWORD *)this + 135) == 0;
        v8 = v18;
        a2 = 0;
        if ( !v5
          && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREEditBox *)((char *)this + 532)) >= 0) )
        {
          CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v8, 0, &a2);
        }
        v9 = v16 < a2;
        *((_DWORD *)this + 190) = v18;
      }
      while ( v9 );
    }
  }
}
