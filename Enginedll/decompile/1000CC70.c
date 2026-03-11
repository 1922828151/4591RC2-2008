/*
 * func-name: sub_1000CC70
 * func-address: 0x1000cc70
 * callers: 0x1000d740, 0x10012c20, 0x10025860
 * callees: 0x10009550, 0x100095b0, 0x101a2522
 */

EditorVar *__cdecl sub_1000CC70(EditorVar *a1, int a2, struct EditorVar *a3)
{
  CREControl *v3; // esi
  EditorVar *result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  EditorVar *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a1;
  v9 = &v6;
  v8 = a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
      result = EditorVar::EditorVar(v3, a3);
    --a2;
    v3 = (CREControl *)((char *)v3 + 96);
    LOBYTE(v10) = 0;
  }
  return result;
}
