/*
 * func-name: ??4ChatManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1007a3d0
 * callers: 0x10002702
 * callees: 0x1000484a, 0x10010848, 0x1001259e, 0x10016f0e
 */

int __userpurge GameClient::ChatManager::operator=@<eax>(int a1@<ecx>, int a2@<ebp>, int a3)
{
  int v3; // eax
  int v5; // esi
  int *v6; // ebp
  int v7; // edi
  int v10; // [esp+0h] [ebp-14h]
  _BYTE v11[4]; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]

  v3 = a3;
  v5 = a1 + 4;
  if ( a1 + 4 != a3 + 4 )
  {
    v6 = *(int **)(a3 + 8);
    v12 = *v6;
    sub_1001259E(a2, v10);
    sub_10016F0E(v5, **(_DWORD **)(v5 + 4), a3 + 4, v12, a3 + 4, (int)v6, a3);
    v3 = a3;
  }
  v7 = v3 + 24;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v3 + 16);
  if ( a1 + 24 != v3 + 24 )
  {
    sub_1000484A((int)v11, a1 + 24, **(_DWORD **)(a1 + 28), a1 + 24, *(_DWORD *)(a1 + 28));
    sub_10010848(v7);
  }
  return a1;
}
