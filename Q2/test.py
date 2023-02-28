from buffer import Buffer
import unittest

class BufferTest(unittest.TestCase):

    def test_add_print(self):
        b = Buffer(5)
        b.add("Alan")
        self.assertEqual(["Alan"], b.show())
        b.add("Kunz")
        self.assertEqual(["Alan", "Kunz"], b.show())
        b.add("Cechinel")
        self.assertEqual(["Alan", "Kunz", "Cechinel"], b.show())
        b.add(28)


    def test_remove_print(self):
        b = Buffer(3)
        b.add("Alan")
        self.assertEqual(["Alan"], b.show())
        b.add("Kunz")
        self.assertEqual("Alan", b.remove())
        b.add("Cechinel")
        b.add(28)
        self.assertEqual(["Kunz", "Cechinel", 28], b.show())
        self.assertEqual("Kunz", b.remove())
        b.add(10)
        self.assertEqual("Cechinel", b.remove())
        b.add(1994)
        self.assertEqual(28, b.remove())
        self.assertEqual(10, b.remove())
        self.assertEqual(1994, b.remove())
    
    if __name__ == "__main__":
        
        unittest.main()