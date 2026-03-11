/*
 * func-name: sub_100F1930
 * func-address: 0x100f1930
 * callers: 0x1000864d
 * callees: 0x1000b767, 0x10011f04, 0x10016527, 0x102c9d62
 */

int __thiscall sub_100F1930(_BYTE *this, void *a2, void *a3, char a4, int a5)
{
  int result; // eax
  _BYTE v7[12]; // [esp+0h] [ebp-80h] BYREF
  void *v8; // [esp+Ch] [ebp-74h]
  void *v9; // [esp+10h] [ebp-70h]
  char v10; // [esp+14h] [ebp-6Ch]
  int v11; // [esp+18h] [ebp-68h]
  int v12; // [esp+1Ch] [ebp-64h]
  int v13; // [esp+20h] [ebp-60h]
  _BYTE *v14; // [esp+2Ch] [ebp-54h]
  _BYTE v15[64]; // [esp+30h] [ebp-50h] BYREF
  int v16; // [esp+7Ch] [ebp-4h]

  v14 = v7;
  std::string::string(v7, a3);
  result = Precacher::GetAnimHandle();
  if ( result == -1 )
  {
    result = std::operator==<char>(a3, &unk_1031103E);
    if ( !(_BYTE)result )
    {
      v11 = a5;
      v10 = a4;
      v9 = a2;
      v8 = a3;
      this[92] = 1;
      sub_10016527(v8, v9, v10, v11);
      v16 = 0;
      sub_10011F04(v15);
      v16 = -1;
      return sub_1000B767(v12, v13);
    }
  }
  return result;
}
