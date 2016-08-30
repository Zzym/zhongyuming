
class  Register{
    private static $objTree = array();
    public static function set($alias,$object){
        self::$objTree[$alias] = $object;
    }
    public static function get($alias){
        return self::$objTree[$alias];
    }
}
//稍微结合下工厂模式(主要生产一个学生对象)

Register::set('stu',Factory::getInstance('student'));//注册student对象,别名为stu

$student = Register::get('stu');//从注册树上获取stu对象(也就是studnet对象)

$student->say();//输出I am a student