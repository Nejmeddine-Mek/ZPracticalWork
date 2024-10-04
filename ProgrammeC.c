  /**--------------------------------------------------------**/
  /**       T r a n s l a t i o n   Z to C (Standard)        **/
  /**                 By Pr. D.E ZEGOUR                      **/
  /**                  E S I - Algiers                       **/
  /**                  Copyright 2014                        **/
  /**--------------------------------------------------------**/
  #include <stdio.h>
  #include <stdlib.h>
  #include <Time.h>
  #include <stdbool.h>
  #include <string.h>
  #include <windows.h>
  /** -Implementation- **\: BINARY SEARCH TREE OF STRUCTURES**/

  /** Structures **/

  typedef struct Tib Type_Tib  ;
  typedef Type_Tib * Typestr_Tib ;
  typedef int Type1_Tib  ;
  typedef bool Type2_Tib  ;
  struct Tib
    {
      Type1_Tib Field1 ;
      Type2_Tib Field2 ;
    };

  Type1_Tib Struct1_Tib ( Typestr_Tib S)
    {
      return  S->Field1 ;
    }

  Type2_Tib Struct2_Tib ( Typestr_Tib S)
    {
      return  S->Field2 ;
    }

  void Ass_struct1_Tib ( Typestr_Tib S, Type1_Tib Val )
    {
       S->Field1 = Val ;
    }

  void Ass_struct2_Tib ( Typestr_Tib S, Type2_Tib Val )
    {
       S->Field2 = Val ;
    }


  /** Binary search trees **/

  typedef Typestr_Tib Typeelem_ATib   ;
  typedef struct Noeud_ATib * Pointer_ATib ;

  struct Noeud_ATib
    {
      Typeelem_ATib  Val ;
      Pointer_ATib Fg ;
      Pointer_ATib Fd ;
      Pointer_ATib Pere ;
     } ;

  Typeelem_ATib Node_value_ATib( Pointer_ATib P )
    { return P->Val;   }

  Pointer_ATib Lc_ATib( Pointer_ATib P)
    { return P->Fg ; }

  Pointer_ATib Rc_ATib( Pointer_ATib P)
    { return P->Fd ; }

  Pointer_ATib Parent_ATib( Pointer_ATib P)
    { return P->Pere ; }

  void Ass_node_val_ATib ( Pointer_ATib P, Typeelem_ATib Val)
    {
      Typeelem_ATib _Temp ;
      _Temp = malloc(sizeof(Type_Tib));
      /* Global assignment of structure */
      _Temp->Field1 = Val->Field1;
      _Temp->Field2 = Val->Field2;
      Val = _Temp ;
       P->Val = Val ;
    }

  void Ass_lc_ATib( Pointer_ATib P, Pointer_ATib Q)
    { P->Fg =  Q;  }

  void Ass_rc_ATib( Pointer_ATib P, Pointer_ATib Q)
    { P->Fd =  Q ; }

  void Ass_parent_ATib( Pointer_ATib P, Pointer_ATib Q)
    { P->Pere =  Q ; }

  void Allocate_node_ATib( Pointer_ATib *P)
    {
      *P = (struct Noeud_ATib *) malloc( sizeof( struct Noeud_ATib))   ;
      (*P)->Val = malloc(sizeof(Type_Tib));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Free_node_ATib( Pointer_ATib P)
    { free( P ) ; }


  /** -Implementation- **\: ARRAY OF BINARY SERACH TREES OF STRUCTURES**/

  /** Arrays **/

  typedef Pointer_ATib Typeelem_V10ATib ;
  typedef Typeelem_V10ATib * Typevect_V10ATib ;

  Typeelem_V10ATib Element_V10ATib ( Typevect_V10ATib V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Ass_element_V10ATib ( Typevect_V10ATib V  , int I1 ,  Typeelem_V10ATib Val )
    {
      *(V +  (I1-1)  ) = Val ;
    }


  /** -Implementation- **\: ARRAY OF INTEGERS**/

  /** Arrays **/

  typedef int Typeelem_V100i ;
  typedef Typeelem_V100i * Typevect_V100i ;

  Typeelem_V100i Element_V100i ( Typevect_V100i V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Ass_element_V100i ( Typevect_V100i V  , int I1 ,  Typeelem_V100i Val )
    {
      *(V +  (I1-1)  ) = Val ;
    }


  /** -Implementation- **\: STACK OF STRUCTURES**/
  /** Stacks**/

  typedef Typestr_Tib Typeelem_PTib ;
  typedef struct Maillon_PTib * Pointer_PTib ;
  typedef   Pointer_PTib  Typepile_PTib  ;

  struct Maillon_PTib
    {
      Typeelem_PTib  Val ;
      Pointer_PTib Suiv ;
    } ;

  void Createstack_PTib( Pointer_PTib *P )
    { *P = NULL ; }

  bool Empty_stack_PTib ( Pointer_PTib P )
    { return  (P == NULL ); }

  void Push_PTib ( Pointer_PTib *P,  Typeelem_PTib Val )
    {
      Pointer_PTib Q;

      Q = (struct Maillon_PTib *) malloc( sizeof( struct Maillon_PTib))   ;
      Q->Val = malloc(sizeof(Type_Tib));
      Typeelem_PTib _Temp ;
      _Temp = malloc(sizeof(Type_Tib));
      /* Global assignment of structure */
      _Temp->Field1 = Val->Field1;
      _Temp->Field2 = Val->Field2;
      Val = _Temp ;
      Q->Val = Val ;
      Q->Suiv = *P;
      *P = Q;
    }

  void Pop_PTib ( Pointer_PTib *P,  Typeelem_PTib *Val )
    {
      Pointer_PTib Sauv;

      if (! Empty_stack_PTib (*P) )
        {
          *Val = (*P)->Val ;
          Sauv = *P;
          *P = (*P)->Suiv;
          free(Sauv);
        }
      else printf ("%s \n", "Stack is empty");
    }


  /** -Implementation- **\: LIST Of INTEGERS**/

  /** Linked lists **/

  typedef int Typeelem_Li   ;
  typedef struct Maillon_Li * Pointer_Li ;

  struct Maillon_Li
    {
      Typeelem_Li  Val ;
      Pointer_Li Suiv ;
    } ;

  Pointer_Li Allocate_cell_Li (Pointer_Li *P)
    {
      *P = (struct Maillon_Li *) malloc( sizeof( struct Maillon_Li)) ;
      (*P)->Suiv = NULL;
    }

  void Ass_val_Li(Pointer_Li P, Typeelem_Li Val)
    {
      P->Val = Val ;
    }

  void Ass_adr_Li( Pointer_Li P,  Pointer_Li Q)
    {
      P->Suiv = Q ;
    }

  Pointer_Li Next_Li(  Pointer_Li P)
    { return( P->Suiv ) ;  }

  Typeelem_Li Cell_value_Li( Pointer_Li P)
    { return( P->Val) ; }

  void Free_Li ( Pointer_Li P)
    { free (P);}

   /**  Trunk data structure for printing the tree**/
typedef struct  {
    struct Trunk *prev;
    char *str;
}Trunk;
// function to return the previous trunk
Trunk * Prev(Trunk *Q)
  {
    return Q->prev;
  }
// function to return the string in our structure
char *Str(Trunk *Q)
{
  return Q->str;
}

// Function to create a new trunk
 Trunk* createTrunk( Trunk *prev, const char *str) {
     Trunk* trunk = ( Trunk*)malloc(sizeof( Trunk));
    trunk->prev = prev;
    trunk->str = strdup(str); // Duplicate the string
    return trunk;
}
 void ass_str(Trunk **p,char str[])
 {
  (*p)->str =strdup(str);
 }



  /** Variables of main program **/
  Pointer_ATib Root=NULL;
  Typevect_V10ATib Tree_ar;
  Typevect_V100i A;
  int I;
  Pointer_ATib _Px1=NULL;

  /** Standard functions **/

  int Aleanombre( int N )
    { return ( rand() % N ); }


 /** Function prototypes **/

  bool  Insert (Pointer_ATib *Root , int *X) ;
  void Free_tree (Pointer_ATib *Root);
  void In_order (Pointer_ATib *Root , Typevect_V100i *A , int *I);
  void Create_tree (Pointer_ATib *Root);
  bool  Verif_const (Pointer_ATib *Root) ;
  void Traverse_bb_lr (Pointer_ATib *Root , Typevect_V100i *Ar , Pointer_PTib *S , int *I);
  void Bb_lr (Pointer_ATib *Root , Typevect_V100i *Ar);
  void Create_lst (Pointer_Li *Lst , int *Value);
  void Del_node (Pointer_Li *Target , Pointer_Li *Prev);
  void List_of_branches_lr (Pointer_ATib *Root , Pointer_Li *Lst);
  bool  Verify_bb_lr (Pointer_ATib *Root , Typevect_V100i *A) ;
  void Delete_doubles (Pointer_Li *Lst);
  void Set_node (Pointer_ATib *Root);
  void Reset_node (Pointer_ATib *Root);
  void Reset_tree (Pointer_ATib *Root);
  bool  Is_leaf (Pointer_ATib *Root) ;
  bool  Visited_stat (Pointer_ATib *Root) ;
  int  Node_int_value (Pointer_ATib *Root) ;
  void Visit_leaves_lr (Pointer_ATib *Root , Typevect_V100i *A , int *I);
  void Ll_lr (Pointer_ATib *Root , Typevect_V100i *T);
  void Visit_del_leaves_lr (Pointer_ATib *Root , Typevect_V100i *Backup , int *I);
  bool  Verify_ll_lr (Pointer_ATib *Root , Typevect_V100i *A) ;
  void Traverse_bb_rl (Pointer_ATib *Root , Typevect_V100i *Ar , Pointer_PTib *S , int *I);
  void Bb_rl (Pointer_ATib *Root , Typevect_V100i *Ar);
  void List_of_branches_rl (Pointer_ATib *Root , Pointer_Li *Lst);
  bool  Verify_bb_rl (Pointer_ATib *Root , Typevect_V100i *A) ;
  void Visit_leaves_rl (Pointer_ATib *Root , Typevect_V100i *A , int *I);
  void Ll_rl (Pointer_ATib *Root , Typevect_V100i *T);
  void Visit_del_leaves_rl (Pointer_ATib *Root , Typevect_V100i *Backup , int *I);
  bool  Verify_ll_rl (Pointer_ATib *Root , Typevect_V100i *A) ;
  /*   Animation procedures                                                           */
  void showTrunks( Trunk *p);
  void Print_Tree(Pointer_ATib root,Trunk *prev,bool Left,int target);
  void show_animation(Pointer_ATib root, Typevect_V100i save);

  /*---------------------------------------------------------------------------------*/
  /*PROCEDURES*/
  /*---------------------------------------------------------------------------------*/
  /*INSERTING A NODE*/
  /*---------------------------------------------------------------------------------*/
  bool  Insert (Pointer_ATib *Root , int *X)
    {
      /** Local variables **/
      bool  Insert2 ;
     Pointer_ATib Current=NULL;
      Pointer_ATib N=NULL;
      Typestr_Tib T;
      bool Searching;
      bool Inserted;

      /** Body of function **/
     T = malloc(sizeof(Type_Tib));
     Inserted  =  true ;
     Searching  =  true ;
     Ass_struct1_Tib ( T  , *X ) ;
     Ass_struct2_Tib ( T  , false ) ;
     Allocate_node_ATib (& N ) ;
     Ass_node_val_ATib ( N , T ) ;
     if( *Root == NULL)   {
       *Root  =  N ;
       }
     else
       {
       Current  =  *Root ;
       while( ( Searching == true )) {
         if( ( *X > Node_int_value ( & Current ) ))   {
           if( ( Rc_ATib ( Current ) == NULL ))   {
             Ass_rc_ATib ( Current , N ) ;
             Ass_parent_ATib ( N , Current ) ;
             Searching  =  false ;
             }
           else
             {
             Current  =  Rc_ATib ( Current ) ;
            
           } ;
           }
         else
           {
           if( ( *X == Node_int_value ( & Current ) ))   {
             Inserted  =  false ;
             Searching  =  false ;
             }
           else
             {
             if( ( *X < Node_int_value ( & Current ) ))   {
               if( ( Lc_ATib ( Current ) == NULL ))   {
                 Ass_lc_ATib ( Current , N ) ;
                 Ass_parent_ATib ( N , Current ) ;
                 Searching  =  false ;
                 }
               else
                 {
                 Current  =  Lc_ATib ( Current ) ;
                
               } ;
              
             } ;
            
           } ;
          
         } ;
        
       } ;
      
     } ;
     Insert2  =  Inserted ;
    
     return Insert2 ;
    }
  /*-----------------------------------------------------------------------------*/
  /*THIS FUNCTION WILL FREE THE OCCUPIED SPACE TO AVOID MEMORY LEAKS!*/
  /*-----------------------------------------------------------------------------*/
  void Free_tree (Pointer_ATib *Root)
    {
      /** Local variables **/
      Pointer_ATib Temp=NULL;
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;

      /** Body of function **/
     if( ( *Root != NULL ))   {
       _Px1 =  Lc_ATib ( *Root ) ;
       Free_tree ( &_Px1) ;
       _Px2 =  Rc_ATib ( *Root ) ;
       Free_tree ( &_Px2) ;
       Free_node_ATib ( *Root ) ;
      
     } ;
    
    }
  /*-----------------------------------------------------------------------------*/
  void In_order (Pointer_ATib *Root , Typevect_V100i *A , int *I)
    {
      /** Local variables **/
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;

      /** Body of function **/
     if( ( *Root != NULL )) {
       _Px1 =  Lc_ATib ( *Root ) ;
       In_order ( &_Px1, & *A , & *I ) ;
       Ass_element_V100i ( *A , *I   , Node_int_value ( & *Root ) ) ;
       *I  =  *I + 1 ;
       _Px2 =  Rc_ATib ( *Root ) ;
       In_order ( &_Px2, & *A , & *I ) ;
      
     } ;
    
    }
  /*-----------------------------------------------------------------------------*/
  /*HERE WE CREATE THE BINARY SEARCH TREE*/
  /*-----------------------------------------------------------------------------*/
  void Create_tree (Pointer_ATib *Root)
    {
      /** Local variables **/
      Typestr_Tib X;
      bool B;
      int J;
      int _Px1;

      /** Body of function **/
     X = malloc(sizeof(Type_Tib));
     J  =  1 ;
     while( J <= 100) {
       _Px1 =  Aleanombre(250 ) + 1 ;
       if( ( Insert ( & *Root , &_Px1) == true ))   {
         J  =  J + 1 ;
        
       } ;
      
     } ;
    
    }
  /*-----------------------------------------------------------------------------*/
  /*HERE WE VERIFY THAT THE BST IS CONSTRUCTED CORRECTLY*/
  /*-----------------------------------------------------------------------------*/
  bool  Verif_const (Pointer_ATib *Root)
    {
      /** Local variables **/
      bool  Verif_const2 ;
      Typevect_V100i A;
      int I;
      bool Correct;
      int _Px1;

      /** Body of function **/
     A = malloc(100 * sizeof(int));
     Correct  =  true ;
     _Px1 =  1 ;
     In_order ( & *Root , & A , &_Px1) ;
     I  =  1 ;
     for( I  =  1 ;I <=  99   ; ++I){
       if( Element_V100i ( A , I   ) > Element_V100i ( A , I + 1   ))   {
         Correct  =  false ;
        
       } ;
      
     } ;
     Verif_const2  =  Correct ;
    
     return Verif_const2 ;
    }
  /*-----------------------------------------------------------------------------*/
  /*FIRST TRAVERSAL & VERIFICATION OF ITS CORRECTNESS*/
  /*-----------------------------------------------------------------------------*/
  /*TRAVERSING PROCEDURE*/
  /*-----------------------------------------------------------------------------*/
  void Traverse_bb_lr (Pointer_ATib *Root , Typevect_V100i *Ar , Pointer_PTib *S , int *I)
    {
      /** Local variables **/
      Typestr_Tib X;
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;
      Pointer_ATib _Px3=NULL;

      /** Body of function **/
     X = malloc(sizeof(Type_Tib));
     if( ( *Root == NULL ))   {
       while( ( Empty_stack_PTib ( *S ) == false )) {
         Pop_PTib (& *S , &X ) ;
         Ass_element_V100i ( *Ar , *I   , Struct1_Tib ( X  ) ) ;
         *I  =  *I + 1 ;
        
       } ;
       }
     else
       {
       Push_PTib (& *S , Node_value_ATib ( *Root ) ) ;
       if( ( Lc_ATib ( *Root ) == NULL ) && ( Rc_ATib ( *Root ) != NULL ))   {
         _Px1 =  Rc_ATib ( *Root ) ;
         Traverse_bb_lr ( &_Px1, & *Ar , & *S , & *I ) ;
         }
       else
         {
         _Px2 =  Lc_ATib ( *Root ) ;
         Traverse_bb_lr ( &_Px2, & *Ar , & *S , & *I ) ;
         _Px3 =  Rc_ATib ( *Root ) ;
         Traverse_bb_lr ( &_Px3, & *Ar , & *S , & *I ) ;
        
       } ;
      
     } ;
    
    }
  /*------------------------------------------------------------------------------*/
  /*IN THIS FUNCTION WE SIMPLY CREATE A STACK*/
  /*THEN WE CALL THE TRAVERSE_BB_LR_FUNCTION TO FILL IT*/
  /*------------------------------------------------------------------------------*/
  void Bb_lr (Pointer_ATib *Root , Typevect_V100i *Ar)
    {
      /** Local variables **/
      Pointer_PTib S=NULL;
      int I;
      int _Px1;

      /** Body of function **/
     Createstack_PTib (& S ) ;
     _Px1 =  1 ;
     Traverse_bb_lr ( & *Root , & *Ar , & S , &_Px1) ;
    
    }
  /*------------------------------------------------------------------------------*/
  void Create_lst (Pointer_Li *Lst , int *Value)
    {
      /** Local variables **/
      Pointer_Li P=NULL;
      Pointer_Li Q=NULL;

      /** Body of function **/
     if( ( *Lst == NULL ))   {
       Allocate_cell_Li (& *Lst ) ;
       Ass_val_Li ( *Lst , *Value ) ;
       }
     else
       {
       Q  =  *Lst ;
       while( ( Next_Li ( Q ) != NULL )) {
         Q  =  Next_Li ( Q ) ;
        
       } ;
       Allocate_cell_Li (& P ) ;
       Ass_val_Li ( P , *Value ) ;
       Ass_adr_Li ( Q , P ) ;
      
     } ;
    
    }
  /*------------------------------------------------------------------------------*/
  void Del_node (Pointer_Li *Target , Pointer_Li *Prev)
    {
      /** Local variables **/
      Pointer_Li Temp=NULL;

      /** Body of function **/
     if( ( *Target != NULL ))   {
       Temp  =  Next_Li ( *Target ) ;
       Ass_adr_Li ( *Prev , Temp ) ;
       Free_Li ( *Target ) ;
       *Target  =  Temp ;
      
     } ;
    
    }
  /*------------------------------------------------------------------------------*/
  void List_of_branches_lr (Pointer_ATib *Root , Pointer_Li *Lst)
    {
      /** Local variables **/
      Pointer_ATib Temp=NULL;
      int _Px1;
      Pointer_ATib _Px2=NULL;
      Pointer_ATib _Px3=NULL;

      /** Body of function **/
     if( ( *Root != NULL )) {
       if( ( Is_leaf ( & *Root ) == true ))   {
         Temp  =  *Root ;
         while( ( Temp != NULL )) {
           _Px1 =  Node_int_value ( & Temp ) ;
           Create_lst ( & *Lst , &_Px1) ;
           Temp  =  Parent_ATib ( Temp ) ;
          
         } ;
        
       } ;
       _Px2 =  Lc_ATib ( *Root ) ;
       List_of_branches_lr ( &_Px2, & *Lst ) ;
       _Px3 =  Rc_ATib ( *Root ) ;
       List_of_branches_lr ( &_Px3, & *Lst ) ;
      
     } ;
    
    }
  /*------------------------------------------------------------------------------*/
  bool  Verify_bb_lr (Pointer_ATib *Root , Typevect_V100i *A)
    {
      /** Local variables **/
      bool  Verify_bb_lr2 ;
     Pointer_Li Head=NULL;
      Pointer_Li Temp=NULL;
      int I;
      bool Bb_lr_correct;

      /** Body of function **/
     Bb_lr_correct  =  true ;
     I  =  1 ;
     List_of_branches_lr ( & *Root , & Head ) ;
     Delete_doubles ( & Head ) ;
     while( ( Head != NULL )) {
       if( ( Cell_value_Li ( Head ) != Element_V100i ( *A , I   ) ))   {
         Bb_lr_correct  =  false ;
        
       } ;
       Temp  =  Head ;
       Head  =  Next_Li ( Head ) ;
       Free_Li ( Temp ) ;
       I  =  I + 1 ;
      
     } ;
     Verify_bb_lr2  =  Bb_lr_correct ;
    
     return Verify_bb_lr2 ;
    }
  /*------------------------------------------------------------------------------*/
  void Delete_doubles (Pointer_Li *Lst)
    {
      /** Local variables **/
      Pointer_Li Current=NULL;
      Pointer_Li Prev=NULL;
      Pointer_Li Temp=NULL;

      /** Body of function **/
     if( *Lst != NULL)   {
       Current  =  *Lst ;
       while( Current != NULL) {
         Prev  =  Current ;
         Temp  =  Next_Li ( Current ) ;
         while( ( Temp != NULL )) {
           if( Cell_value_Li ( Temp ) == Cell_value_Li ( Current ))   {
             Del_node ( & Temp , & Prev ) ;
            
           } ;
           Prev  =  Next_Li ( Prev ) ;
           if( Prev != NULL)   {
             Temp  =  Next_Li ( Prev ) ;
            
           } ;
          
         } ;
         Current  =  Next_Li ( Current ) ;
        
       } ;
      
     } ;
    
    }
  /*--------------------------------------------------------------------------------*/
  /*THIS PROCEDURE SETS THE 2ND FIELD TO true*/
  /*IN OTHER WORDS, WE CALL IT WHEN WE WANT TO MARK A NODE*/
  /*AS VISITED*/
  /*--------------------------------------------------------------------------------*/
  void Set_node (Pointer_ATib *Root)
    {
      /** Local variables **/
      Typestr_Tib X;

      /** Body of function **/
     X = malloc(sizeof(Type_Tib));
     if( *Root != NULL)   {
      /* Global assignment of structure */
       X->Field1 =   Node_value_ATib ( *Root )->Field1;
       X->Field2 =   Node_value_ATib ( *Root )->Field2;
 ;
       Ass_struct2_Tib ( X  , true ) ;
       Ass_node_val_ATib ( *Root , X ) ;
      
     } ;
    
    }
  /*--------------------------------------------------------------------------------*/
  /*WHILE HERE, WE RESET IT TO false*/
  /*i.e: THE NODE IS NOT VISITED*/
  /*--------------------------------------------------------------------------------*/
  void Reset_node (Pointer_ATib *Root)
    {
      /** Local variables **/
      Typestr_Tib X;

      /** Body of function **/
     X = malloc(sizeof(Type_Tib));
     if( *Root != NULL)   {
      /* Global assignment of structure */
       X->Field1 =   Node_value_ATib ( *Root )->Field1;
       X->Field2 =   Node_value_ATib ( *Root )->Field2;
 ;
       Ass_struct2_Tib ( X  , false ) ;
       Ass_node_val_ATib ( *Root , X ) ;
      
     } ;
    
    }
  /*------------------------------------------------------------------------------*/
  /*THIS ACTION BELOW, WILL BE RESETTING THE 2ND FIELD OF ALL NODES*/
  /*OF THE WHOLE TREE TO false, SO THAT WE CAN PREFORM TRAVERSAL 4 ON IT*/
  /*------------------------------------------------------------------------------*/
  void Reset_tree (Pointer_ATib *Root)
    {
      /** Local variables **/
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;

      /** Body of function **/
     if( ( *Root != NULL ))   {
       _Px1 =  Lc_ATib ( *Root ) ;
       Reset_tree ( &_Px1) ;
       Reset_node ( & *Root ) ;
       _Px2 =  Rc_ATib ( *Root ) ;
       Reset_tree ( &_Px2) ;
      
     } ;
    
    }
  /*------------------------------------------------------------------------------*/
  /*THIS FUNCTION RETURNS true IF THE NODE IS A REAL LEAF OR A LOGICAL*/
  /*LEAF. i.e: HAS ALL CHILDREN VISITED*/
  /*------------------------------------------------------------------------------*/
  bool  Is_leaf (Pointer_ATib *Root)
    {
      /** Local variables **/
      bool  Is_leaf2 ;
      bool Leaf;
     Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;
      Pointer_ATib _Px3=NULL;
      Pointer_ATib _Px4=NULL;

      /** Body of function **/
     Leaf  =  true ;
     if( ( *Root == NULL ))   {
       Leaf  =  false ;
       }
     else
       {
       if( ( Rc_ATib ( *Root ) != NULL ) && ( Lc_ATib ( *Root ) != NULL ))   {
         _Px1 =  Rc_ATib ( *Root ) ;
         _Px2 =  Lc_ATib ( *Root ) ;
         if( ( Visited_stat ( &_Px1) == false ) || ( Visited_stat ( &_Px2) == false ))   {
           Leaf  =  false ;
          
         } ;
         }
       else
         {
         if( ( Rc_ATib ( *Root ) != NULL ) && ( Lc_ATib ( *Root ) == NULL ))   {
           _Px3 =  Rc_ATib ( *Root ) ;
           if( ( Visited_stat ( &_Px3) == false ))   {
             Leaf  =  false ;
            
           } ;
           }
         else
           {
           if( ( Rc_ATib ( *Root ) == NULL ) && ( Lc_ATib ( *Root ) != NULL ))   {
             _Px4 =  Lc_ATib ( *Root ) ;
             if( ( Visited_stat ( &_Px4) == false ))   {
               Leaf  =  false ;
              
             } ;
            
           } ;
          
         } ;
        
       } ;
      
     } ;
     Is_leaf2  =  Leaf ;
    
     return Is_leaf2 ;
    }
  /*--------------------------------------------------------------------------------*/
  /*RETURNS THE VALUE IN THE SECOND FILED OF THE NODE*/
  /*SO BASICALLY IT WILL BE HELPFUL KNOWING IF A NODE IS VISITED OR NOT*/
  /*--------------------------------------------------------------------------------*/
  bool  Visited_stat (Pointer_ATib *Root)
    {
      /** Local variables **/
      bool  Visited_stat2 ;
      Typestr_Tib X;

      /** Body of function **/
     X = malloc(sizeof(Type_Tib));
     if( *Root != NULL)   {
      /* Global assignment of structure */
       X->Field1 =   Node_value_ATib ( *Root )->Field1;
       X->Field2 =   Node_value_ATib ( *Root )->Field2;
 ;
      
     } ;
     Visited_stat2  =  Struct2_Tib ( X  ) ;
    
     return Visited_stat2 ;
    }
  /*--------------------------------------------------------------------------------*/
  /*THIS FUNCTION RETURNS THE VALUE IN THE 1ST FIELD OF THE NODE*/
  /*--------------------------------------------------------------------------------*/
  int  Node_int_value( Pointer_ATib *Root)
    {
      /** Local variables **/
      int  Node_int_value2 ;
      Typestr_Tib X;

      /** Body of function **/
     X = malloc(sizeof(Type_Tib));
     if( *Root != NULL)   {
      /* Global assignment of structure */
       X->Field1 =   Node_value_ATib ( *Root )->Field1;
       X->Field2 =   Node_value_ATib ( *Root )->Field2;
 ;
      
     } ;
     Node_int_value2  =  Struct1_Tib ( X  ) ;
    
     return Node_int_value2 ;
    }
  /*--------------------------------------------------------------------------------*/
  /*THIS PROCEDURE VISITS ACTUAL LEAVES OR LOGICAL LEAVES*/
  /*LOGICAL LEAVES ARE NODES WITH VISITED CHILDREN*/
  /*I CANNOT THINK OF A BETTER NAME*/
  /*--------------------------------------------------------------------------------*/
  void Visit_leaves_lr (Pointer_ATib *Root , Typevect_V100i *A , int *I)
    {
      /** Local variables **/
      Typestr_Tib X;
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;

      /** Body of function **/
     X = malloc(sizeof(Type_Tib));
     if( ( *Root != NULL ))   {
       if( ( Is_leaf ( & *Root ) == true ) && ( Visited_stat ( & *Root ) == false ))   {
         Ass_element_V100i ( *A , *I   , Node_int_value ( & *Root ) ) ;
         *I  =  *I + 1 ;
         Set_node ( & *Root ) ;
        
       } ;
       _Px1 =  Lc_ATib ( *Root ) ;
       Visit_leaves_lr ( &_Px1, & *A , & *I ) ;
       _Px2 =  Rc_ATib ( *Root ) ;
       Visit_leaves_lr ( &_Px2, & *A , & *I ) ;
      
     } ;
    
    }
  /*--------------------------------------------------------------------------------*/
  /*THIS FUNCTION HERE,BASICALLY PERFORMS THE SECOND TRAVERSAL*/
  /*LEAVES FROM LEFT TO RIGHT, THEN THEIR PARENTS UNTIL THE ROOT*/
  /*--------------------------------------------------------------------------------*/
  void Ll_lr (Pointer_ATib *Root , Typevect_V100i *T)
    {
      /** Local variables **/
      int I;

      /** Body of function **/
     if( *Root != NULL)   {
       I  =  1 ;
       while( ( Is_leaf ( & *Root ) == false )) {
         Visit_leaves_lr ( & *Root , & *T , & I ) ;
        
       } ;
       Ass_element_V100i ( *T ,  I   , Node_int_value ( & *Root ) ) ;
      
     } ;
     Reset_tree ( & *Root ) ;
    
    }
  /*--------------------------------------------------------------------------------*/
  /*THIS PROCEDURE VISITS LEAVES THEN DELETES THEM, THEIR VALUES ARE SAVED IN AN ARRAY*/
  /*--------------------------------------------------------------------------------*/
  void Visit_del_leaves_lr (Pointer_ATib *Root , Typevect_V100i *Backup , int *I)
    {
      /** Local variables **/
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;
      Pointer_ATib _Px3=NULL;
      Pointer_ATib _Px4=NULL;
      Pointer_ATib _Px5=NULL;
      Pointer_ATib _Px6=NULL;

      /** Body of function **/
     if( *Root != NULL)   {
       if( Lc_ATib ( *Root ) != NULL)   {
         _Px1 =  Lc_ATib ( *Root ) ;
         if( ( Is_leaf ( &_Px1) == true ))   {
           _Px2 =  Lc_ATib ( *Root ) ;
           Ass_element_V100i ( *Backup , *I   , Node_int_value ( &_Px2) ) ;
           *I  =  *I + 1 ;
           Free_node_ATib ( Lc_ATib ( *Root ) ) ;
           Ass_lc_ATib ( *Root , NULL ) ;
          
         } ;
        
       } ;
       _Px3 =  Lc_ATib ( *Root ) ;
       Visit_del_leaves_lr ( &_Px3, & *Backup , & *I ) ;
       if( Rc_ATib ( *Root ) != NULL)   {
         _Px4 =  Rc_ATib ( *Root ) ;
         if( ( Is_leaf ( &_Px4) == true ))   {
           _Px5 =  Rc_ATib ( *Root ) ;
           Ass_element_V100i ( *Backup , *I   , Node_int_value ( &_Px5) ) ;
           *I  =  *I + 1 ;
           Free_node_ATib ( Rc_ATib ( *Root ) ) ;
           Ass_rc_ATib ( *Root , NULL ) ;
          
         } ;
        
       } ;
       _Px6 =  Rc_ATib ( *Root ) ;
       Visit_del_leaves_lr ( &_Px6, & *Backup , & *I ) ;
      
     } ;
    
    }
  /*--------------------------------------------------------------------------------*/
  /*THIS FUNCTION PERFORMS THE VERIFICATION PROCESS, BY VISITING LEAVES EACH TIME*/
  /*THEN DELETING THEM, AFTERWARDS IT COMPARES THE GOTTEN ARRAY WITH THE ARRAY RETURNED*/
  /*FROM THE TRAVERSAL PROCEDURE, IT RETURNS true IF THE TRAVERSAL IS CORRECT*/
  /*--------------------------------------------------------------------------------*/
  bool  Verify_ll_lr (Pointer_ATib *Root , Typevect_V100i *A)
    {
      /** Local variables **/
      bool  Verify_ll_lr2 ;
      Typevect_V100i Backup;
      int I;
      bool Ll_lr_correct;
      bool Temp;
      int _Px1;

      /** Body of function **/
     Backup = malloc(100 * sizeof(int));
     I  =  1 ;
     Ll_lr_correct  =  true ;
     while( ( Is_leaf ( & *Root ) == false )) {
       Visit_del_leaves_lr ( & *Root , & Backup , & I ) ;
      
     } ;
     Ass_element_V100i ( Backup , 100   , Node_int_value ( & *Root ) ) ;
     for( I  =  1 ;I <=  100   ; ++I){
       if( ( Element_V100i ( *A , I   ) != Element_V100i ( Backup , I   ) ))   {
         Ll_lr_correct  =  false ;
        
       } ;
       _Px1 =  Element_V100i ( Backup , 101 - I   ) ;
       Temp  =  Insert ( & *Root , &_Px1) ;
      
     } ;
     Verify_ll_lr2  =  Ll_lr_correct ;
    
     return Verify_ll_lr2 ;
    }
  /*--------------------------------------------------------------------------------*/
  /*THIRD TRAVERSAL & VERIFICATION*/
  /*--------------------------------------------------------------------------------*/
  /*THIS PROCEDURE TRAVERSES THE TREE BRANCH BY BRANCH, FROM RIGHT TO LEFT*/
  /*BOTTOM TO TOP, PUTS THE VALUES OF THE NODES IN AN ARRAY*/
  /*--------------------------------------------------------------------------------*/
  void Traverse_bb_rl (Pointer_ATib *Root , Typevect_V100i *Ar , Pointer_PTib *S , int *I)
    {
      /** Local variables **/
      Typestr_Tib X;
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;
      Pointer_ATib _Px3=NULL;

      /** Body of function **/
     X = malloc(sizeof(Type_Tib));
     if( ( *Root == NULL ))   {
       while( ( Empty_stack_PTib ( *S ) == false )) {
         Pop_PTib (& *S , &X ) ;
         Ass_element_V100i ( *Ar , *I   , Struct1_Tib ( X  ) ) ;
         *I  =  *I + 1 ;
        
       } ;
       }
     else
       {
       Push_PTib (& *S , Node_value_ATib ( *Root ) ) ;
       if( ( Lc_ATib ( *Root ) != NULL ) && ( Rc_ATib ( *Root ) == NULL ))   {
         _Px1 =  Lc_ATib ( *Root ) ;
         Traverse_bb_rl ( &_Px1, & *Ar , & *S , & *I ) ;
         }
       else
         {
         _Px2 =  Rc_ATib ( *Root ) ;
         Traverse_bb_rl ( &_Px2, & *Ar , & *S , & *I ) ;
         _Px3 =  Lc_ATib ( *Root ) ;
         Traverse_bb_rl ( &_Px3, & *Ar , & *S , & *I ) ;
        
       } ;
      
     } ;
    
    }
  /*--------------------------------------------------------------------------------*/
  /*THIS FUNCTION PERFORMS THE TRAVERSAL BY JUST CREATING A STACK AND CALLING THE */
  /*TRAVERSAL FUNCTION, RETURNS AN ARRAY WITH VALUES ACCORDING TO THE TRAVERSAL*/
  /*--------------------------------------------------------------------------------*/
  void Bb_rl (Pointer_ATib *Root , Typevect_V100i *Ar)
    {
      /** Local variables **/
      Pointer_PTib S=NULL;
      int I;
      int _Px1;

      /** Body of function **/
     Createstack_PTib (& S ) ;
     _Px1 =  1 ;
     Traverse_bb_rl ( & *Root , & *Ar , & S , &_Px1) ;
    
    }
  /*---------------------------------------------------------------------------------*/
  /*THIS FUNCTION IS ANALOGOUS TO THE ONE ABOVE, IT JUST GOES FROM RIGHT TO LEFT*/
  /*---------------------------------------------------------------------------------*/
  void List_of_branches_rl (Pointer_ATib *Root , Pointer_Li *Lst)
    {
      /** Local variables **/
      Pointer_ATib Temp=NULL;
      int _Px1;
      Pointer_ATib _Px2=NULL;
      Pointer_ATib _Px3=NULL;

      /** Body of function **/
     if( ( *Root != NULL )) {
       if( ( Is_leaf ( & *Root ) == true ))   {
         Temp  =  *Root ;
         while( ( Temp != NULL )) {
           _Px1 =  Node_int_value ( & Temp ) ;
           Create_lst ( & *Lst , &_Px1) ;
           Temp  =  Parent_ATib ( Temp ) ;
          
         } ;
        
       } ;
       _Px2 =  Rc_ATib ( *Root ) ;
       List_of_branches_rl ( &_Px2, & *Lst ) ;
       _Px3 =  Lc_ATib ( *Root ) ;
       List_of_branches_rl ( &_Px3, & *Lst ) ;
      
     } ;
    
    }
  /*---------------------------------------------------------------------------------*/
  /*THIS FUNCTION VERIFIES THE THIRD TRAVERSAL, JUST COMPARES VALUES IN THE OBTAINED*/
  /*ARRAY WITH VALUES IN THE LIST*/
  /*---------------------------------------------------------------------------------*/
  bool  Verify_bb_rl (Pointer_ATib *Root , Typevect_V100i *A)
    {
      /** Local variables **/
      bool  Verify_bb_rl2 ;
     Pointer_Li Head=NULL;
      Pointer_Li Temp=NULL;
      int I;
      bool Bb_rl_correct;

      /** Body of function **/
     Bb_rl_correct  =  true ;
     I  =  1 ;
     List_of_branches_rl ( & *Root , & Head ) ;
     Delete_doubles ( & Head ) ;
     while( ( Head != NULL )) {
       if( ( Cell_value_Li ( Head ) != Element_V100i ( *A , I   ) ))   {
         Bb_rl_correct  =  false ;
        
       } ;
       Temp  =  Head ;
       Head  =  Next_Li ( Head ) ;
       Free_Li ( Temp ) ;
       I  =  I + 1 ;
      
     } ;
     Verify_bb_rl2  =  Bb_rl_correct ;
    
     return Verify_bb_rl2 ;
    }
  /*---------------------------------------------------------------------------------*/
  void Visit_leaves_rl (Pointer_ATib *Root , Typevect_V100i *A , int *I)
    {
      /** Local variables **/
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;

      /** Body of function **/
     if( ( *Root != NULL ))   {
       if( ( Is_leaf ( & *Root ) == true ) && ( Visited_stat ( & *Root ) == false ))   {
         Ass_element_V100i ( *A , *I   , Node_int_value ( & *Root ) ) ;
         *I  =  *I + 1 ;
         Set_node ( & *Root ) ;
        
       } ;
       _Px1 =  Rc_ATib ( *Root ) ;
       Visit_leaves_rl ( &_Px1, & *A , & *I ) ;
       _Px2 =  Lc_ATib ( *Root ) ;
       Visit_leaves_rl ( &_Px2, & *A , & *I ) ;
      
     } ;
    
    }
  /*---------------------------------------------------------------------------------*/
  void Ll_rl (Pointer_ATib *Root , Typevect_V100i *T)
    {
      /** Local variables **/
      int I;

      /** Body of function **/
     if( *Root != NULL)   {
       I  =  1 ;
       while( ( Is_leaf ( & *Root ) == false )) {
         Visit_leaves_rl ( & *Root , & *T , & I ) ;
        
       } ;
       Ass_element_V100i ( *T , I   , Node_int_value ( & *Root ) ) ;
      
     } ;
     Reset_tree ( & *Root ) ;
    
    }
  /*---------------------------------------------------------------------------------*/
  void Visit_del_leaves_rl (Pointer_ATib *Root , Typevect_V100i *Backup , int *I)
    {
      /** Local variables **/
      Pointer_ATib _Px1=NULL;
      Pointer_ATib _Px2=NULL;
      Pointer_ATib _Px3=NULL;
      Pointer_ATib _Px4=NULL;
      Pointer_ATib _Px5=NULL;
      Pointer_ATib _Px6=NULL;

      /** Body of function **/
     if( *Root != NULL)   {
       if( Rc_ATib ( *Root ) != NULL)   {
         _Px1 =  Rc_ATib ( *Root ) ;
         if( ( Is_leaf ( &_Px1) == true ))   {
           _Px2 =  Rc_ATib ( *Root ) ;
           Ass_element_V100i ( *Backup , *I   , Node_int_value ( &_Px2) ) ;
           *I  =  *I + 1 ;
           Free_node_ATib ( Rc_ATib ( *Root ) ) ;
           Ass_rc_ATib ( *Root , NULL ) ;
          
         } ;
        
       } ;
       _Px3 =  Rc_ATib ( *Root ) ;
       Visit_del_leaves_rl ( &_Px3, & *Backup , & *I ) ;
       if( Lc_ATib ( *Root ) != NULL)   {
         _Px4 =  Lc_ATib ( *Root ) ;
         if( ( Is_leaf ( &_Px4) == true ))   {
           _Px5 =  Lc_ATib ( *Root ) ;
           Ass_element_V100i ( *Backup , *I   , Node_int_value ( &_Px5) ) ;
           *I  =  *I + 1 ;
           Free_node_ATib ( Lc_ATib ( *Root ) ) ;
           Ass_lc_ATib ( *Root , NULL ) ;
          
         } ;
        
       } ;
       _Px6 =  Lc_ATib ( *Root ) ;
       Visit_del_leaves_rl ( &_Px6, & *Backup , & *I ) ;
      
     } ;
    
    }
    void in_order(Pointer_ATib root)
    {
      if(root != NULL)
      {
        in_order(Lc_ATib(root));
        printf("%d  \n",Node_int_value(&root));
        in_order(Rc_ATib(root));
      }
    }
  /*---------------------------------------------------------------------------------*/
  bool  Verify_ll_rl (Pointer_ATib *Root , Typevect_V100i *A)
    {
      /** Local variables **/
      bool  Verify_ll_rl2 ;
      Typevect_V100i Backup;
      int I;
      bool Ll_rl_correct;
      bool Temp;
      int _Px1;

      /** Body of function **/
     Backup = malloc(100 * sizeof(int));
     I  =  1 ;
     Ll_rl_correct  =  true ;
     while( ( Is_leaf ( & *Root ) == false )) {
       Visit_del_leaves_rl ( & *Root , & Backup , & I ) ;
      
     } ;
     Ass_element_V100i ( Backup , 100   , Node_int_value ( & *Root ) ) ;
     for( I  =  1 ;I <=  100   ; ++I){
       if( ( Element_V100i ( *A , I   ) != Element_V100i ( Backup , I   ) ))   {
         Ll_rl_correct  =  false ;
        
       } ;
       _Px1 =  Element_V100i ( Backup , 101 - I   ) ;
       Temp  =  Insert ( & *Root , &_Px1) ;
      
     } ;
     Verify_ll_rl2  =  Ll_rl_correct ;
    
     return Verify_ll_rl2 ;
    }
    /*                                                                               */
/*------------------------------------------------------------------------------*/
/*_____________________________________________________________________________*/

void show_animation(Pointer_ATib root, Typevect_V100i save)
{
   for( int k = 1; k <= 20;k++)
   {
    system("CLS");
    Print_Tree(root,NULL,0,Element_V100i(save,k));
    Sleep(1000);
   }
}
    /* here are the animation part functions!!*/
    // function to print branches of the binary tree
void showTrunks( Trunk *p) {
    if (p == NULL) {
        return;
    }
    showTrunks(Prev(p));
    printf("%s", Str(p));
}
//-------------------------------------------------------

void Print_Tree(Pointer_ATib root,  Trunk *prev, bool Left,int target) {
    if (root == NULL) {
        return;
    }

    char prev_str[5] = "    ";
     Trunk *current = createTrunk(prev, prev_str);

    Print_Tree(Rc_ATib(root), current, 1,target);

    if (!prev) {
      ass_str(&current,"---");
    } else if (Left) {
        ass_str(&current,".---");
        strcpy(prev_str, "   |");
    } else {
      ass_str(&current,"`---");
        prev->str = strdup(prev_str);
    }

    showTrunks(current);
    if(Node_int_value(&root) == target)
    {
        printf("\e[0;34m");
    printf(" %d\n", Node_int_value(&root));
        printf("\e[0;37m");

    }
    else    {
    printf(" %d\n", Node_int_value(&root));
    }

    if (prev) {
        prev->str = strdup(prev_str);
    }
    ass_str(&current,"   |");

    Print_Tree(Lc_ATib(root), current, 0,target);

    free(Str(current));  // Free the duplicated string
    free(current);       // Free the trunk
   }
   /*-------------------------------------------------------------------------------------------------------*/
   /*                                           MAIN FUNCTION                                              */
  int main(int argc, char *argv[])
    {
     srand(time(NULL));
     Tree_ar = malloc(10 * sizeof(Pointer_ATib));
     int _Izw2;
     for (_Izw2=0; _Izw2<10; ++_Izw2)
       Tree_ar[_Izw2] = malloc( sizeof(Pointer_ATib ));
     A = malloc(100 * sizeof(int));
     for( I  =  1 ;I <=  10   ; ++I){
       Root  =  NULL ;
       printf ( " %s", "Tree number :" );
       printf ( " %d", I ) ;
       Create_tree ( & Root ) ;
       if( Verif_const ( & Root ) == true)   {
         printf ( " %s", "  created correctly\n" ) ;
         }
       else
         {
         printf ( " %s", "  was not created correctly...\n" ) ;
        
       } ;
       Bb_lr ( & Root , & A ) ;
       if( Verify_bb_lr ( & Root , & A ) == true)   {
         printf ( " %s", "  Traversal 1 (bb_lr) : Performed correctly\n" ) ;
         }
       else
         {
         printf ( " %s", "  Traversal 1 (bb_lr) : wasn not performed correctly...\n" ) ;
        
       } 
       Bb_rl ( & Root , & A ) ;
       if( Verify_bb_rl ( & Root , & A ) == true)   {
         printf ( " %s", "  Traversal 2 (ll_lr) : Performed correctly\n" ) ;
         }
       else
         {
         printf ( " %s", "  Traversal 2 (ll_lr) : was not performed correctly...\n" );
       } ;
       Ll_lr ( & Root , & A ) ;
       if( Verify_ll_lr ( & Root , & A ) == true)   {
         printf ( " %s", "  Traversal 3 (bb_rl) : Performed correctly\n" ) ;
         }
       else
         {
         printf ( " %s", "  Traversal 3 (bb_rl) : was not performed correctly...\n" );
       } 
       Ll_rl ( & Root , & A ) ;
       if( Verify_ll_rl ( & Root , & A ) == true)   {
         printf ( " %s", "  Traversal 4 (ll_rl) : Performed correctly\n" ) ;
         }
       else
         {
         printf ( " %s", "  Traversal 4 (ll_rl) : was not performed correctly...\n" ) ;
        
       } 
       Ass_element_V10ATib ( Tree_ar , I   , Root ) ;
      printf("\n");
      Sleep(500);
     } 
     for( I  =  1 ;I <=  10   ; ++I){
       _Px1 =  Element_V10ATib ( Tree_ar , I   ) ;
       Free_tree ( &_Px1) ;
      
     } 
     Sleep(4000);
     system("PAUSE");
    /*  Here begins the second part of the Practical work...  */
    system("CLS");
    printf("\n   Remark:   \n");
    printf("     The animation will be performed on one tree of 20 Nodes     \n");
    printf("     Nodes will take random values between 1 and 99  \n");
    printf("     These trees are temporary, they will be deleted after finishing the animation part  \n");

    Sleep(3000);
    system("CLS");
     
    /* In this loop we will be creating trees and performing animations on them */
    int random, j ;
    Typevect_V100i save = (int *)malloc(20*sizeof(int));
    Pointer_ATib node;

    node = NULL;
    j = 1;
    while( j <= 20)
    {
    random = Aleanombre(98)+1;
    if (Insert(&node,&random))
     {
      ++j;
     }
    }
   Sleep(1000);
   system("CLS");
   printf(" \n                      HERE WE START OUR SIMPLE ANIMATION         \n");
   system("CLS");
   /*                here begins the animation of the first traversal                       */
   printf(" \n                    WE SHALL BEGIN WITH THE FIRST TRAVERSAL         \n");
   printf(" \n           BRANCH BY BRANCH, FROM BOTTOM TO TOP, FROM LEFT TO RIGHT         \n");
   Sleep(2000);
   Bb_lr(&node,&save);
   show_animation(node,save);
   Sleep(500);
   /*                        here the animation of the second traversal     */
system("CLS");
   printf(" \n                   NOW COMES THE SECOND TRAVERSAL         \n");
   printf(" \n                  LEAF BY LEAF, FROM LEFT TO RIGHT         \n");
   Sleep(2000);
    Ll_lr(&node,&save);
   show_animation(node,save);
   Sleep(500);
   system("CLS");
   printf(" \n                                  AND NOW THE THIRD TRAVERSAL         \n");
   printf(" \n                  BRANCH BY BRANCH, FROM BOTTOM TO TOP, FROM LEFT TO RIGHT         \n");
   Sleep(2000);
    Bb_rl(&node,&save);
   show_animation(node,save);
   Sleep(500);
   system("CLS");
   printf(" \n                    FINALLY, THE FOURTH TRAVERSAL         \n");
   printf(" \n                   LEAF BY LEAF, FROM RIGHT TO LEFT         \n");
   Sleep(2000);
    Ll_rl(&node,&save);
   show_animation(node,save);
   Sleep(500);
   Free_tree(&node);
  /* FOR THE ANIMATION, I WAS GOING TO MAKE AN API AT THE BEGINNING BUT IT TURNED OUT TO BE MORE DIFFICULT THAN I THOUGHT, YET
   I KEPT SEARCHING AND FOUND SOME SORT OF A GRAPHICAL INTERFACE THAT ANIMATES HOW IN-ORDER TRAVERSAL VISITS THE TREE NODES
  BUT I COULDN'T RUN IT IN ANY IDE, AND THEN I DISCOVERED THAT IT CAN RUN IF I COMPILE IT IN COMMAND PROMPT THEN, I RUN THE EXECUTABLE FILE
  THAT WAS GENERATED, I'D BE GRATEFUL IF I CAN SHARE IT WITH YOU*/

   MessageBox(NULL,"Programme Terminated Successfully","Information",MB_OK | MB_ICONINFORMATION);
      return 0;
    }

