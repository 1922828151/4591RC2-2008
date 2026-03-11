/*
 * func-name: ?Tick@COccupyEstabUI@@UAEXM@Z_0
 * func-address: 0x10278540
 * callers: 0x1000692e
 * callees: 0x10011a4f, 0x102c9d62, 0x102c9f53, 0x102c9fe0
 */

void __thiscall COccupyEstabUI::Tick(COccupyEstabUI *this, float a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  void *v6; // eax
  const wchar_t *v7; // eax
  float v8; // [esp+20h] [ebp-7Ch]
  float v9; // [esp+24h] [ebp-78h]
  float v10; // [esp+28h] [ebp-74h]
  _BYTE v11[28]; // [esp+2Ch] [ebp-70h] BYREF
  _BYTE v12[28]; // [esp+48h] [ebp-54h] BYREF
  wchar_t Buffer[20]; // [esp+64h] [ebp-38h] BYREF
  int v14; // [esp+98h] [ebp-4h]

  if ( (dword_103B7A98 & 1) == 0 )
  {
    dword_103B7A98 |= 1u;
    v14 = 0;
    std::wstring::wstring(v11, L"OCCUPY_INERASE");
    LOBYTE(v14) = 1;
    Precacher::GetText(&unk_103B7A74, v11);
    LOBYTE(v14) = 0;
    std::wstring::~wstring(v11);
    atexit(sub_10306000);
    v14 = -1;
  }
  if ( (dword_103B7A98 & 2) == 0 )
  {
    dword_103B7A98 |= 2u;
    v14 = 2;
    std::wstring::wstring(v11, L"OCCUPY_INWRITE");
    LOBYTE(v14) = 3;
    Precacher::GetText(&unk_103B7A50, v11);
    LOBYTE(v14) = 2;
    std::wstring::~wstring(v11);
    atexit(sub_10305FF0);
    v14 = -1;
  }
  v3 = *((_DWORD *)this + 969);
  v9 = *(float *)(v3 + 712);
  v10 = *(float *)(v3 + 708);
  if ( *((_BYTE *)this + 3900) )
  {
    v8 = *((float *)this + 973) - (*(float *)&GSeconds - *((float *)this + 972)) * *((float *)this + 974);
    if ( v8 < (double)v9 )
      v8 = v9;
  }
  else
  {
    v8 = (*(float *)&GSeconds - *((float *)this + 972)) * *((float *)this + 974) + *((float *)this + 973);
    if ( v8 > (double)v10 )
      v8 = v10;
  }
  (*(void (__stdcall **)(float))(**((_DWORD **)this + 969) + 200))(COERCE_FLOAT(LODWORD(v8)));
  v4 = (int)(((double (__thiscall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 969) + 204))(*((_DWORD *)this + 969))
           / (v10 - v9)
           * 100.0
           + 0.5);
  if ( v4 > 100 )
    LOWORD(v4) = 100;
  sub_10011A4F(Buffer, (size_t)L"%d%%", v4);
  CREStatic::SetText(*((CREStatic **)this + 970), Buffer);
  v5 = (int)(*(float *)&GSeconds - *((float *)this + 972)) % 4;
  v6 = &unk_103B7A74;
  if ( !*((_BYTE *)this + 3900) )
    v6 = &unk_103B7A50;
  std::wstring::wstring(v12, v6);
  v14 = 4;
  if ( v5 > 0 )
  {
    do
    {
      std::wstring::operator+=(v12, 46);
      --v5;
    }
    while ( v5 );
  }
  v7 = (const wchar_t *)std::wstring::c_str(v12);
  CREStatic::SetText(*((CREStatic **)this + 971), v7);
  CTYDialog::Tick(this, a2);
  v14 = -1;
  std::wstring::~wstring(v12);
}
