/*
 * func-name: sub_1016D4C0
 * func-address: 0x1016d4c0
 * callers: 0x1016c4c0
 * callees: 0x1016cb40, 0x1016d2b0
 */

int *__thiscall sub_1016D4C0(_DWORD *this, void *a2)
{
  int v2; // esi
  int *v3; // edi
  int *v4; // eax
  int v6; // [esp+Ch] [ebp-34h] BYREF
  _BYTE v7[28]; // [esp+14h] [ebp-2Ch] BYREF
  int v8; // [esp+30h] [ebp-10h]
  int v9; // [esp+3Ch] [ebp-4h]

  v2 = (int)this;
  v3 = sub_1016CB40(this, (int)a2);
  if ( !v2 )
    invalid_parameter_noinfo();
  if ( v3 == *(int **)(v2 + 4) || (unsigned __int8)std::operator<<wchar_t>(a2, v3 + 3) )
  {
    std::wstring::wstring(v7, a2);
    v8 = 0;
    v9 = 0;
    v4 = sub_1016D2B0(v2, &v6, v2, v3, v7);
    v2 = *v4;
    v3 = (int *)v4[1];
    v9 = -1;
    std::wstring::~wstring(v7);
  }
  if ( !v2 )
    invalid_parameter_noinfo();
  if ( v3 == *(int **)(v2 + 4) )
    invalid_parameter_noinfo();
  return v3 + 10;
}
