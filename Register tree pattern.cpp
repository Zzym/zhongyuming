
class  Register{
    private static $objTree = array();
    public static function set($alias,$object){
        self::$objTree[$alias] = $object;
    }
    public static function get($alias){
        return self::$objTree[$alias];
    }
}
//��΢����¹���ģʽ(��Ҫ����һ��ѧ������)

Register::set('stu',Factory::getInstance('student'));//ע��student����,����Ϊstu

$student = Register::get('stu');//��ע�����ϻ�ȡstu����(Ҳ����studnet����)

$student->say();//���I am a student