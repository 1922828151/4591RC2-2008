/*
 * func-name: initvectorc_0
 * func-address: 0x10030f00
 * callers: 0x10009813
 * callees: 0x1002d830, 0x1002e040
 */

void initvectorc_0()
{
  int v0; // esi
  _DWORD *v1; // eax
  int inited; // eax
  int Dict; // ebp
  char **v4; // edi
  int i; // ebx

  v0 = 0;
  if ( !dword_103B4EA0 )
  {
    v1 = malloc(0xCu);
    dword_103AC954 = PyType_Type;
    v1[1] = &unk_103AC950;
    v1[2] = 0;
    *v1 = 1;
    dword_103B4EA0 = (int)v1;
  }
  inited = Py_InitModule4("vectorc", &off_103ACA18, 0, 0, 1012);
  Dict = PyModule_GetDict(inited);
  if ( !dword_103B4E9C )
  {
    v4 = off_103ACFE8[0];
    for ( i = 0; v4; v4 = off_103ACFE8[i] )
    {
      ++i;
      dword_103B4E80[v0] = (int)sub_1002D830((int)v4);
      v0 = i;
    }
    dword_103B4E9C = 1;
  }
  sub_1002E040(Dict, (int)&unk_103ACFF8);
}
