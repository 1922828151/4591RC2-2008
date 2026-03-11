/*
 * func-name: ?SetNodeSpeed@AdapterActor@GameClient@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector@@@Z_0
 * func-address: 0x100f3e10
 * callers: 0x1000abff
 * callees: 0x10019aa1
 */

char __thiscall GameClient::AdapterActor::SetNodeSpeed(_DWORD **this, void *a2, int *a3)
{
  _DWORD *v3; // edi
  int v4; // ecx
  int v5; // edx
  int v7[3]; // [esp+14h] [ebp-40h] BYREF
  _BYTE v8[28]; // [esp+20h] [ebp-34h] BYREF
  int v9; // [esp+3Ch] [ebp-18h]
  int v10; // [esp+40h] [ebp-14h]
  int v11; // [esp+44h] [ebp-10h]
  int v12; // [esp+50h] [ebp-4h]

  v3 = (_DWORD *)*this[296];
  if ( v3 == this[296] )
  {
    std::string::string(v8, a2);
    v4 = a3[1];
    v9 = *a3;
    v5 = a3[2];
    v10 = v4;
    v11 = v5;
    v12 = 0;
    sub_10019AA1((int)v7, v8);
    v12 = -1;
    std::string::~string(v8);
  }
  else
  {
    v3[9] = *a3;
    v3[10] = a3[1];
    v3[11] = a3[2];
  }
  return 1;
}
