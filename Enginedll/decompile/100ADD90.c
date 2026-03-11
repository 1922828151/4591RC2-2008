/*
 * func-name: ?SetValueInt@CRENumericEdit@@UAEXH@Z
 * func-address: 0x100add90
 * callers: none
 * callees: 0x100a56d0, 0x100ac120
 */

void __thiscall CRENumericEdit::SetValueInt(CRENumericEdit *this, int Value)
{
  int v2; // eax
  int v4; // ecx
  int *v5; // esi
  char Buffer[100]; // [esp+4h] [ebp-12Ch] BYREF
  WCHAR WideCharStr[100]; // [esp+68h] [ebp-C8h] BYREF

  v2 = Value;
  v4 = *((_DWORD *)this + 180);
  if ( Value < v4 || (v4 = *((_DWORD *)this + 179), Value > v4) )
    v2 = v4;
  *((_DWORD *)this + 177) = v2;
  itoa(v2, Buffer, 10);
  MultiByteToWideChar(0, 0, Buffer, -1, WideCharStr, 99);
  v5 = (int *)*((_DWORD *)this + 190);
  CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(v5 + 133), WideCharStr);
  CREEditBox::PlaceCaret((CREEditBox *)v5, v5[135]);
  v5[189] = v5[187];
}
